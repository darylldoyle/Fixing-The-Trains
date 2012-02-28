#ifndef TRAINWINDOW_H
#define TRAINWINDOW_H

#include <QMainWindow>
#include <functions.h>

namespace Ui {
class TrainWindow;
}

class TrainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TrainWindow(QWidget *parent = 0);
    ~TrainWindow();
    
private:
    Ui::TrainWindow *uii;

private slots:
    void save_data();
};

#endif // TRAINWINDOW_H
