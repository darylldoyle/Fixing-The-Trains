#ifndef NETTRAINWINDOW_H
#define NETTRAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class NetTrainWindow;
}

class NetTrainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NetTrainWindow(QWidget *parent = 0);
    ~NetTrainWindow();
    
private:
    Ui::NetTrainWindow *uiii;

private slots:
    void plotGraph();
};

#endif // NETTRAINWINDOW_H
