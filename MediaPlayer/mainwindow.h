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
    void on_Action_NewFile_triggered();

    void on_bt_Play_clicked();

    void on_bt_Pause_clicked();

    void on_bt_Stop_clicked();

    void on_slider_Progress_sliderMoved(int position);

    void on_slider_Volume_sliderMoved(int position);

    void on_Action_NewFolderFiles_triggered();

    void on_table_Playlist_cellDoubleClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *Player;
    QMediaPlaylist *Playlist;
};

#endif // MAINWINDOW_H
