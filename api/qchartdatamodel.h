#ifndef QCHARTDATAMODEL_H
#define QCHARTDATAMODEL_H

#include <QAbstractListModel>
#include <QMap>
#include <QVariant>

class QChartDataModel : public QAbstractTableModel
{
    Q_OBJECT
public:
     QChartDataModel(QVariant::Type XType, QVariant::Type YType, QObject *parent = 0);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

     QString xLabel() const;
     QString yLabel() const;

     void setXLabel(const QString& label);
     void setYLabel(const QString& label);

    void append(const QVariant& x, const QVariant& y);



signals:

public slots:


private:

    class QChartDataModelPrivate;
    QChartDataModelPrivate * const d;

};

#endif // QCHARTDATAMODEL_H
