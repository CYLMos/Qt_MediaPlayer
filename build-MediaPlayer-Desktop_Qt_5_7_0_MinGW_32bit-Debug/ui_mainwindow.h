/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Action_NewFile;
    QAction *Action_NewFolderFiles;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_Volume;
    QSlider *slider_Volume;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_Progress;
    QSlider *slider_Progress;
    QGridLayout *gridLayout_3;
    QPushButton *bt_Pause;
    QPushButton *bt_Stop;
    QPushButton *bt_Play;
    QTableWidget *table_Playlist;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(404, 349);
        Action_NewFile = new QAction(MainWindow);
        Action_NewFile->setObjectName(QStringLiteral("Action_NewFile"));
        Action_NewFolderFiles = new QAction(MainWindow);
        Action_NewFolderFiles->setObjectName(QStringLiteral("Action_NewFolderFiles"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 191, 35));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_Volume = new QLabel(layoutWidget);
        label_Volume->setObjectName(QStringLiteral("label_Volume"));

        gridLayout->addWidget(label_Volume, 0, 0, 1, 1);

        slider_Volume = new QSlider(layoutWidget);
        slider_Volume->setObjectName(QStringLiteral("slider_Volume"));
        slider_Volume->setMinimum(0);
        slider_Volume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider_Volume, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 381, 47));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_Progress = new QLabel(layoutWidget1);
        label_Progress->setObjectName(QStringLiteral("label_Progress"));

        gridLayout_2->addWidget(label_Progress, 0, 0, 1, 1);

        slider_Progress = new QSlider(layoutWidget1);
        slider_Progress->setObjectName(QStringLiteral("slider_Progress"));
        slider_Progress->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slider_Progress, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        bt_Pause = new QPushButton(layoutWidget1);
        bt_Pause->setObjectName(QStringLiteral("bt_Pause"));

        gridLayout_3->addWidget(bt_Pause, 0, 1, 1, 1);

        bt_Stop = new QPushButton(layoutWidget1);
        bt_Stop->setObjectName(QStringLiteral("bt_Stop"));

        gridLayout_3->addWidget(bt_Stop, 0, 2, 1, 1);

        bt_Play = new QPushButton(layoutWidget1);
        bt_Play->setObjectName(QStringLiteral("bt_Play"));

        gridLayout_3->addWidget(bt_Play, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        table_Playlist = new QTableWidget(centralWidget);
        table_Playlist->setObjectName(QStringLiteral("table_Playlist"));
        table_Playlist->setGeometry(QRect(10, 110, 381, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 404, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(Action_NewFile);
        menuFile->addAction(Action_NewFolderFiles);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Action_NewFile->setText(QApplication::translate("MainWindow", "\351\226\213\345\225\237\346\226\260\346\252\224", 0));
        Action_NewFolderFiles->setText(QApplication::translate("MainWindow", "\351\226\213\345\225\237\346\211\200\346\234\211\350\263\207\346\226\231\345\244\276\345\205\247\347\232\204\346\252\224\346\241\210", 0));
        label_Volume->setText(QApplication::translate("MainWindow", "Volume", 0));
        label_Progress->setText(QApplication::translate("MainWindow", "Progress", 0));
        bt_Pause->setText(QApplication::translate("MainWindow", "Pause", 0));
        bt_Stop->setText(QApplication::translate("MainWindow", "Stop", 0));
        bt_Play->setText(QApplication::translate("MainWindow", "Play", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
