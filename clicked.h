#ifndef CLICKED_H
#define CLICKED_H

#include <QObject>

class Clicked : public QObject
{
    Q_OBJECT
public:
    explicit Clicked(QObject *parent = 0);
    
signals:
    
public slots:
    void run_network();
    
};

#endif // CLICKED_H
