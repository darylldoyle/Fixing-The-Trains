#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <trainwindow.h>
#include <nettrainwindow.h>
#include <functions.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    TrainWindow *trainWindow;
    NetTrainWindow *netTrainWindow;

public slots:
   int do_something();

private slots:
   void new_train_window();
   void new_NetTrainWindow();
};

#endif // MAINWINDOW_H
