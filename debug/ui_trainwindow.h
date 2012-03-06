/********************************************************************************
** Form generated from reading UI file 'trainwindow.ui'
**
** Created: Tue Mar 6 16:05:07 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINWINDOW_H
#define UI_TRAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
    QComboBox *door_lock;
    QLabel *label_11;
    QComboBox *door_open;
    QComboBox *station;
    QLabel *label_3;
    QPushButton *save_butt;
    QLabel *label;
    QComboBox *lock_out;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *open_out;
    QComboBox *PPM;
    QLabel *label_8;
    QComboBox *brake_out;
    QSlider *speed;
    QSpinBox *speed_out;
    QLabel *label_12;
    QComboBox *door_free;
    QLabel *speed_val;
    QLabel *label_7;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TrainWindow)
    {
        if (TrainWindow->objectName().isEmpty())
            TrainWindow->setObjectName(QString::fromUtf8("TrainWindow"));
        TrainWindow->resize(382, 516);
        centralwidget = new QWidget(TrainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 110, 41, 16));
        door_lock = new QComboBox(centralwidget);
        door_lock->setObjectName(QString::fromUtf8("door_lock"));
        door_lock->setGeometry(QRect(130, 80, 111, 26));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 320, 111, 16));
        door_open = new QComboBox(centralwidget);
        door_open->setObjectName(QString::fromUtf8("door_open"));
        door_open->setGeometry(QRect(130, 110, 111, 26));
        station = new QComboBox(centralwidget);
        station->setObjectName(QString::fromUtf8("station"));
        station->setGeometry(QRect(130, 170, 111, 26));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 91, 16));
        save_butt = new QPushButton(centralwidget);
        save_butt->setObjectName(QString::fromUtf8("save_butt"));
        save_butt->setGeometry(QRect(43, 391, 291, 81));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 62, 16));
        lock_out = new QComboBox(centralwidget);
        lock_out->setObjectName(QString::fromUtf8("lock_out"));
        lock_out->setGeometry(QRect(160, 310, 111, 26));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 260, 111, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 290, 111, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 91, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 91, 16));
        open_out = new QComboBox(centralwidget);
        open_out->setObjectName(QString::fromUtf8("open_out"));
        open_out->setGeometry(QRect(160, 340, 111, 26));
        PPM = new QComboBox(centralwidget);
        PPM->setObjectName(QString::fromUtf8("PPM"));
        PPM->setGeometry(QRect(130, 50, 111, 26));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 220, 62, 16));
        brake_out = new QComboBox(centralwidget);
        brake_out->setObjectName(QString::fromUtf8("brake_out"));
        brake_out->setGeometry(QRect(160, 280, 111, 26));
        speed = new QSlider(centralwidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(340, 50, 21, 141));
        speed->setCursor(QCursor(Qt::ClosedHandCursor));
        speed->setAutoFillBackground(false);
        speed->setMaximum(55);
        speed->setSingleStep(1);
        speed->setOrientation(Qt::Vertical);
        speed->setInvertedAppearance(true);
        speed->setTickInterval(5);
        speed_out = new QSpinBox(centralwidget);
        speed_out->setObjectName(QString::fromUtf8("speed_out"));
        speed_out->setGeometry(QRect(160, 250, 111, 25));
        speed_out->setMaximum(45);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 350, 121, 16));
        door_free = new QComboBox(centralwidget);
        door_free->setObjectName(QString::fromUtf8("door_free"));
        door_free->setGeometry(QRect(130, 140, 111, 26));
        speed_val = new QLabel(centralwidget);
        speed_val->setObjectName(QString::fromUtf8("speed_val"));
        speed_val->setGeometry(QRect(310, 110, 21, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 10, 62, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 180, 91, 16));
        TrainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TrainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 382, 22));
        TrainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TrainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TrainWindow->setStatusBar(statusbar);

        retranslateUi(TrainWindow);
        QObject::connect(speed, SIGNAL(sliderMoved(int)), speed_val, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(TrainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TrainWindow)
    {
        TrainWindow->setWindowTitle(QApplication::translate("TrainWindow", "Train dialogue", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TrainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        door_lock->clear();
        door_lock->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("TrainWindow", "Doors locked", 0, QApplication::UnicodeUTF8));
        door_open->clear();
        door_open->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        station->clear();
        station->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("TrainWindow", "Doors open", 0, QApplication::UnicodeUTF8));
        save_butt->setText(QApplication::translate("TrainWindow", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TrainWindow", "PPM", 0, QApplication::UnicodeUTF8));
        lock_out->clear();
        lock_out->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("TrainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TrainWindow", "Emergency brake", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TrainWindow", "Doors locked", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TrainWindow", "Doors free", 0, QApplication::UnicodeUTF8));
        open_out->clear();
        open_out->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        PPM->clear();
        PPM->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "<180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "420", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("TrainWindow", "Outputs", 0, QApplication::UnicodeUTF8));
        brake_out->clear();
        brake_out->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("TrainWindow", "Doors open", 0, QApplication::UnicodeUTF8));
        door_free->clear();
        door_free->insertItems(0, QStringList()
         << QApplication::translate("TrainWindow", "No", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TrainWindow", "Yes", 0, QApplication::UnicodeUTF8)
        );
        speed_val->setText(QApplication::translate("TrainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TrainWindow", "Inputs", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TrainWindow", "At station", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TrainWindow: public Ui_TrainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINWINDOW_H
