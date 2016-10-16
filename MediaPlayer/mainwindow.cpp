#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
#include <QFileInfo>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Player = new QMediaPlayer(this);
    Playlist = new QMediaPlaylist;
    Playlist->setPlaybackMode(QMediaPlaylist::PlaybackMode::Loop);

    ui->table_Playlist->setColumnCount(1);
    QStringList headerList;
    headerList << "Song name";
    ui->table_Playlist->setHorizontalHeaderLabels(headerList);
    ui->table_Playlist->horizontalHeader()->setStretchLastSection(true);

    connect(Player,&QMediaPlayer::positionChanged,ui->slider_Progress,&QSlider::setValue);
    connect(Player,&QMediaPlayer::durationChanged,ui->slider_Progress,&QSlider::setMaximum);

    ui->slider_Volume->setValue(50);
    on_slider_Volume_sliderMoved(50);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Player;
    delete Playlist;
}

void MainWindow::on_Action_NewFile_triggered()
{

    QString filename = QFileDialog::getOpenFileName(this,"Open file","","Music Files(*.mp3)");
    Playlist->addMedia(QUrl(filename));
    if(Player->mediaStatus() == QMediaPlayer::NoMedia){
        Playlist->setCurrentIndex(1);
        Player->setPlaylist(Playlist);
        Player->play();
    }
    QFileInfo file;
    file.setFile(filename);
    int index = ui->table_Playlist->rowCount();
    ui->table_Playlist->insertRow(index);
    QTableWidgetItem *newItem = new QTableWidgetItem;
    newItem->setText(file.completeBaseName());
    newItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    ui->table_Playlist->setItem(index,0,newItem);
}

void MainWindow::on_Action_NewFolderFiles_triggered()
{
    QString dirname = QFileDialog::getExistingDirectory(this,tr("Chose folder"),"",QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
    if(!dirname.isEmpty() && !dirname.isNull()){
        QDir dir(dirname);
        if(ui->table_Playlist->rowCount() > 0){ui->table_Playlist->setRowCount(0);}
        if(!Playlist->isEmpty()){
            delete Playlist;
            Playlist = new QMediaPlaylist;Playlist->setPlaybackMode(QMediaPlaylist::PlaybackMode::Loop);
        }
        foreach(QFileInfo file, dir.entryInfoList()){
            if(file.isFile()){
                QString s;
                for(int i = file.fileName().length()-1;; i--){
                    QChar c = file.fileName().at(i);
                    if(c != '.'){s.append(c);}
                    else{break;}
                }
                if(s == "3pm"){
                    Playlist->addMedia(QUrl(file.absoluteFilePath()));
                    int index = ui->table_Playlist->rowCount();
                    ui->table_Playlist->insertRow(index);
                    QTableWidgetItem *newItem = new QTableWidgetItem;
                    newItem->setText(file.completeBaseName());
                    newItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
                    ui->table_Playlist->setItem(index,0,newItem);
                }
            }
        }
        Playlist->setCurrentIndex(1);
        Player->setPlaylist(Playlist);
        Player->play();
    }
}

void MainWindow::on_bt_Play_clicked()
{
    if(Player->mediaStatus() != QMediaPlayer::NoMedia){
        Player->play();
        ui->statusBar->showMessage("Playing...");
    }
}

void MainWindow::on_bt_Pause_clicked()
{
    if(Player->mediaStatus() != QMediaPlayer::NoMedia){
        Player->pause();
        ui->statusBar->showMessage("Paused");
    }
}

void MainWindow::on_bt_Stop_clicked()
{
     if(Player->mediaStatus() != QMediaPlayer::NoMedia){
         Player->stop();
         ui->statusBar->showMessage("Stopped");
     }
}

void MainWindow::on_slider_Progress_sliderMoved(int position)
{
    Player->setPosition(position);
}

void MainWindow::on_slider_Volume_sliderMoved(int position)
{
     Player->setVolume(position);
}

void MainWindow::on_table_Playlist_cellDoubleClicked(int row, int column)
{
    Playlist->setCurrentIndex(row);
    Player->play();
}
