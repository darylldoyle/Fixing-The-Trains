#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trainwindow.h"
#include "ui_trainwindow.h"
#include "fann.h"
#include "fann_cpp.h"
#include <ios>
#include <iostream>
#include <iomanip>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->run_button,SIGNAL(clicked()),this,SLOT(do_something()));
    connect(ui->new_train_list,SIGNAL(triggered()),this,SLOT(new_train_window()));
    connect(ui->Train_Network,SIGNAL(triggered()),this,SLOT(new_NetTrainWindow()));
}

void MainWindow::new_train_window()
{
    trainWindow = new TrainWindow(this);
    trainWindow->show();
}

void MainWindow::new_NetTrainWindow()
{
    netTrainWindow = new NetTrainWindow(this);
    netTrainWindow->show();
}

double scalePpmData(double input)
{
    double output = (input/420);
    return output;
}

double scaleSpeedData(double input)
{
    double output = (input/55);
    return output;
}

int MainWindow::do_something()
{
    double speed = scaleSpeedData(ui->speed->value());
    int locked = ui->door_lock->currentIndex();
    int free = ui->door_free->currentIndex();
    int open = ui->door_open->currentIndex();
    int station = ui->station->currentIndex();
    double ppm = ui->PPM->currentIndex();
    if(ppm == 3){ppm=scalePpmData(420);}
    else if(ppm == 2){ppm=scalePpmData(270);}
    else if(ppm == 1){ppm=scalePpmData(180);}
    else if(ppm == 0){ppm=scalePpmData(0);}
    std::vector<fann_type> inputs(6);
    inputs[0] = ppm;
    inputs[1] = open;
    inputs[2] = locked;
    inputs[3] = free;
    inputs[4] = station;
    inputs[5] = speed;
    //qDebug("speed: %f\t locked: %d\t free: %d\t open: %d\t station: %d\t ppm: %f",speed,locked,free,open,station,ppm);
    std::ios::sync_with_stdio(); // Syncronize cout and printf output
    // CREATE THE NETWORK
    FANN::neural_net ann;
    // LOAD NETWORK FROM FILE
    ann.create_from_file("/usr/local/FTT/network.config");
    // RUN NETWORK
    fann_type * const outputs = ann.run(&inputs[0]);
    // DESTROY NETWORK
    ann.destroy();
    // GRAB OUPUTS INTO VARS
    const double out_speed = outputs[0];
    const int out_brake = outputs[1];
    const int out_locked = outputs[2];
    const int out_open = outputs[3];
    //qDebug("Test output: %i", out_brake);
    // CAST AND OUTPUT EACH VAR
    char brak[100];
    sprintf( brak, "%i", out_brake );
    ui->brake_out->setText(brak);
    char spee[100];
    sprintf( spee, "%f", out_speed );
    ui->speed_out->setText(spee);
    char lock[100];
    sprintf( lock, "%i", out_locked );
    ui->lock_out->setText(lock);
    char ope[100];
    sprintf( ope, "%i", out_open );
    ui->open_out->setText(ope);

    return 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
