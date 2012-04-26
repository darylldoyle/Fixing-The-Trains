/*

Copyright (C) 2012  Daryll Doyle

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
long with this program.  If not, see <http://www.gnu.org/licenses/>.


*/

#include "trainwindow.h"
#include "mainwindow.h"
#include "ui_trainwindow.h"
#include <sys/stat.h>


TrainWindow::TrainWindow(QWidget *parent) :
    QMainWindow(parent),
    uii(new Ui::TrainWindow)
{
    uii->setupUi(this);

    connect(uii->save_butt,SIGNAL(clicked()),this,SLOT(save_data()));

}

TrainWindow::~TrainWindow()
{
    delete uii;
}

double scalePpmData1(double input)
{
    double output = (input/420);
    return output;
}

double scaleSpeedData1(double input)
{
    double output = (input/55);
    return output;
}

double scaleOutSpeed1(double input)
{
    double output = (input/45);
    return output;
}

void TrainWindow::save_data()
{
    const char *startData = "6 6 4\n";
    struct stat su;
    struct stat st;
    double speed_to, curr_speed, ppm;
    int door_open_in, door_locked_in, door_free_in, at_station_in;
    int emer_brake_out, door_locked_out, door_open_out;
    char buffer[50];
    FILE * pFile;
    // CHECK FOR DIRECTORY
    if(stat("/usr/local/FTT/",&st) == 0){}
    else
    {
        system("mkdir /usr/local/FTT/");
    }
    // OPEN FILE OR CREATE IF NOT EXIST


    if(stat("/usr/local/FTT/train.data",&su) == 0)
    {
        pFile = fopen ("/usr/local/FTT/train.data","a");
    }
    else
    {
        //IF DOESN'T EXIST ADD START DATA
        pFile = fopen ("/usr/local/FTT/train.data","a");
        fputs (startData,pFile);
    }
    //DATA NEEDS TO BE ADDED IN THE FOLLOWING FORMAT

    speed_to = scaleOutSpeed1(uii->speed_out->value());
    curr_speed = scaleSpeedData1(uii->speed->value());
    ppm = uii->PPM->currentIndex();

    // RESCALE PPM
    if(ppm == 3){ppm=scalePpmData1(420);}
    else if(ppm == 2){ppm=scalePpmData1(270);}
    else if(ppm == 1){ppm=scalePpmData1(180);}
    else if(ppm == 0){ppm=scalePpmData1(0);}

    door_open_in = uii->door_open->currentIndex();
    door_locked_in = uii->door_lock->currentIndex();
    door_free_in = uii->door_free->currentIndex();
    at_station_in = uii->station->currentIndex();
    emer_brake_out = uii->brake_out->currentIndex();
    door_locked_out = uii->lock_out->currentIndex();
    door_open_out = uii->open_out->currentIndex();

    sprintf(buffer,"%f %d %d %d %d %f\n%f %d %d %d\n",ppm,door_open_in,door_locked_in,door_free_in,at_station_in,curr_speed,(speed_to*45),emer_brake_out,door_locked_out,door_open_out);
    fputs(buffer,pFile);

    // OUTPUT FORMAT
    // PPM doors_open doors_locked doors_free at_station curr_speed
    // speed_to emergency_brake doors_locked doors_open


    // CLOSE FILE
    fclose(pFile);
}
