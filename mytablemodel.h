#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H

#include <QAbstractTableModel>

/**
 * @brief The model for the table where plugins are displayed
 */
class MyTableModel: public QAbstractTableModel {

public:

    MyTableModel(QObject *parent = nullptr);

    virtual int rowCount(const QModelIndex &index = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex &index = QModelIndex()) const override;
    virtual QVariant headerData(int section, Qt::Orientation orientation = Qt::Horizontal, int role = Qt::DisplayRole) const override;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // MYTABLEMODEL_H
