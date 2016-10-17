#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Action_NewFile_triggered();  //add new music

    void on_bt_Play_clicked();  //play music

    void on_bt_Pause_clicked();  //pause music

    void on_bt_Stop_clicked();  // stop music

    void on_slider_Progress_sliderMoved(int position);  //progress move

    void on_slider_Volume_sliderMoved(int position);  //adjust volume

    void on_Action_NewFolderFiles_triggered();  //add all music in the folder user chosed

    void on_table_Playlist_cellDoubleClicked(int row, int column);  //double click playlist to play music

    void changMessage(int position);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *Player;
    QMediaPlaylist *Playlist;

    int now_PlaylistPosition = -1;
};

#endif // MAINWINDOW_H
