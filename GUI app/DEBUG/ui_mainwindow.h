/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Mar 7 20:24:18 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_train_list;
    QAction *Train_Network;
    QWidget *centralWidget;
    QSlider *speed;
    QComboBox *PPM;
    QComboBox *door_lock;
    QLabel *label;
    QLabel *label_2;
    QComboBox *door_open;
    QLabel *label_3;
    QComboBox *door_free;
    QLabel *label_4;
    QComboBox *station;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *speed_val;
    QPushButton *run_button;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *brake_out;
    QLabel *speed_out;
    QLabel *open_out;
    QLabel *lock_out;
    QLabel *label_11;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(705, 216);
        MainWindow->setMinimumSize(QSize(705, 216));
        MainWindow->setMaximumSize(QSize(705, 216));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        new_train_list = new QAction(MainWindow);
        new_train_list->setObjectName(QString::fromUtf8("new_train_list"));
        Train_Network = new QAction(MainWindow);
        Train_Network->setObjectName(QString::fromUtf8("Train_Network"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        speed = new QSlider(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(320, 10, 21, 141));
        speed->setCursor(QCursor(Qt::ClosedHandCursor));
        speed->setAutoFillBackground(false);
        speed->setMaximum(55);
        speed->setSingleStep(1);
        speed->setOrientation(Qt::Vertical);
        speed->setInvertedAppearance(true);
        speed->setTickInterval(5);
        PPM = new QComboBox(centralWidget);
        PPM->setObjectName(QString::fromUtf8("PPM"));
        PPM->setGeometry(QRect(110, 10, 111, 26));
        door_lock = new QComboBox(centralWidget);
        door_lock->setObjectName(QString::fromUtf8("door_lock"));
        door_lock->setGeometry(QRect(110, 40, 111, 26));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 62, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 91, 16));
        door_open = new QComboBox(centralWidget);
        door_open->setObjectName(QString::fromUtf8("door_open"));
        door_open->setGeometry(QRect(110, 70, 111, 26));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 91, 16));
        door_free = new QComboBox(centralWidget);
        door_free->setObjectName(QString::fromUtf8("door_free"));
        door_free->setGeometry(QRect(110, 100, 111, 26));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 91, 16));
        station = new QComboBox(centralWidget);
        station->setObjectName(QString::fromUtf8("station"));
        station->setGeometry(QRect(110, 130, 111, 26));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 91, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 70, 41, 16));
        speed_val = new QLabel(centralWidget);
        speed_val->setObjectName(QString::fromUtf8("speed_val"));
        speed_val->setGeometry(QRect(290, 70, 21, 16));
        run_button = new QPushButton(centralWidget);
        run_button->setObjectName(QString::fromUtf8("run_button"));
        run_button->setGeometry(QRect(360, 10, 114, 151));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 40, 111, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 70, 111, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(490, 100, 111, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 130, 121, 16));
        brake_out = new QLabel(centralWidget);
        brake_out->setObjectName(QString::fromUtf8("brake_out"));
        brake_out->setGeometry(QRect(620, 70, 62, 16));
        speed_out = new QLabel(centralWidget);
        speed_out->setObjectName(QString::fromUtf8("speed_out"));
        speed_out->setGeometry(QRect(620, 40, 62, 16));
        open_out = new QLabel(centralWidget);
        open_out->setObjectName(QString::fromUtf8("open_out"));
        open_out->setGeometry(QRect(620, 130, 62, 16));
        lock_out = new QLabel(centralWidget);
        lock_out->setObjectName(QString::fromUtf8("lock_out"));
        lock_out->setGeometry(QRect(620, 100, 62, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(580, 10, 62, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 705, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuNew->addAction(new_train_list);

        retranslateUi(MainWindow);
        QObject::connect(speed, SIGNAL(sliderMoved(int)), speed_val, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Fixing the Trains", 0, QApplication::UnicodeUTF8));
        new_train_list->setText(QApplication::translate("MainWindow", "Training list", 0, QApplication::UnicodeUTF8));
        Train_Network->setText(QApplication::translate("MainWindow", "Train Network", 0, QApplication::UnicodeUTF8));
        PPM->clear();
        PPM->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "420", 0, QApplication::UnicodeUTF8)
        );
        door_lock->clear();
        door_lock->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "PPM", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Doors locked", 0, QApplication::UnicodeUTF8));
        door_open->clear();
        door_open->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "Doors open", 0, QApplication::UnicodeUTF8));
        door_free->clear();
        door_free->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("MainWindow", "Doors free", 0, QApplication::UnicodeUTF8));
        station->clear();
        station->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "At station", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        speed_val->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        run_button->setText(QApplication::translate("MainWindow", "RUN", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Emergency brake", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Doors locked", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Doors open", 0, QApplication::UnicodeUTF8));
        brake_out->setText(QString());
        speed_out->setText(QString());
        open_out->setText(QString());
        lock_out->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Outputs", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
