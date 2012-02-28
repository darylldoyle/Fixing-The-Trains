#include "qchartdatamodel.h"
#include <QStringList>
#include <QHash>
class QChartDataModel::QChartDataModelPrivate
{

public:
    QList<QPair<QVariant,QVariant> > datas;   //Y -> X
    QString xLabel;
    QString yLabel;
    QVariant::Type xType;
    QVariant::Type yType;
};



QChartDataModel::QChartDataModel(QVariant::Type XType, QVariant::Type YType, QObject *parent) :
    QAbstractTableModel(parent),
    d(new QChartDataModelPrivate)
{
    d->xType  = XType;
    d->yType  = YType;
    d->xLabel = QVariant::typeToName(d->xType);
    d->yLabel = QVariant::typeToName(d->yType);
}

int QChartDataModel::rowCount(const QModelIndex &parent) const
{

    return d->datas.count();

}
int QChartDataModel::columnCount(const QModelIndex &parent) const
{
    return 2;

}


QVariant QChartDataModel::data(const QModelIndex &index, int role) const
{
    if ( role != Qt::DisplayRole)
        return QVariant();

    if ( index.column() == 0)
    {
        QVariant X = d->datas.at(index.row()).first;
        return X;
    }

    if ( index.column() == 1)
    {
        QVariant Y = d->datas.at(index.row()).second;
        return Y;
    }



}
bool QChartDataModel::setData(const QModelIndex &index, const QVariant &value, int role)
{

    if (role != Qt::EditRole)
        return false;

    if ( index.row() >= d->datas.count())
        return false;


    if ( index.column() == 0)
        d->datas.replace(index.row(),qMakePair(value, d->datas[index.row()].second));

    if (index.column() == 1)
        d->datas.replace(index.row(),qMakePair(d->datas[index.row()].first, value));


}

void QChartDataModel::append(const QVariant& x, const QVariant& y)
{

    if ( (x.type() == d->xType) && (y.type() == y.type()))
        d->datas.append(qMakePair(x,y));


}

QString QChartDataModel::xLabel() const
{
    return d->xLabel;
}

QString QChartDataModel::yLabel() const
{
    return d->yLabel;
}

void QChartDataModel::setXLabel(const QString &label)
{
    d->xLabel = label;
}

void QChartDataModel::setYLabel(const QString &label)
{
    d->yLabel = label;
}

QVariant QChartDataModel::headerData(int section, Qt::Orientation orientation, int role) const
{

    if ( (orientation == Qt::Horizontal) && (role == Qt::DisplayRole))
    {


        if ( section == 0)
            return xLabel();

        if ( section == 1)
            return yLabel();

    }

    return QAbstractTableModel::headerData(section,orientation,role);



}






