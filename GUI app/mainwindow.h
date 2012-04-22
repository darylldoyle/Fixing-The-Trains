#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <trainwindow.h>
#include <QIcon>
#include <QMessageBox>

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

public slots:
   int do_something();

private slots:
   void new_train_window();
};

#endif // MAINWINDOW_H
