#ifndef SLOTS_H
#define SLOTS_H

#include <QObject>

class Slots : public QObject
{
    Q_OBJECT
public:
    explicit Slots(QObject *parent = 0);
    
signals:
    
public slots:
    do_something();
    
};

#endif // SLOTS_H
