#include "nettrainwindow.h"
#include "ui_nettrainwindow.h"

NetTrainWindow::NetTrainWindow(QWidget *parent) :
    QMainWindow(parent),
    uiii(new Ui::NetTrainWindow)
{
    uiii->setupUi(this);
}

NetTrainWindow::~NetTrainWindow()
{
    delete uiii;
}

void NetTrainWindow::plotGraph()
{
}
