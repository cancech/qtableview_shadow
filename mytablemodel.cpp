#include "mytablemodel.h"
#include <QColor>
#include <QBrush>
#include <QFont>
#include <QPalette>

// CTOR
MyTableModel::MyTableModel(QObject *parent):
    QAbstractTableModel(parent) {

}

int MyTableModel::rowCount(const QModelIndex &index) const {
    return 3;
}

int MyTableModel::columnCount(const QModelIndex &index) const {
    return 3;
}

QVariant MyTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        switch(section) {
        case 0: return tr("A");
        case 1: return tr("B");
        case 2: return tr("C");
        }
    }

    return QAbstractTableModel::headerData(section, orientation, role);
}

QString getText(int row, int col) {
    return QString::number(row) + " - " + QString::number(col);
}

// Get the data for the specified cell
QVariant MyTableModel::data(const QModelIndex &index, int role) const {
    if (role == Qt::DisplayRole)
        return getText(index.row(), index.column());
    else if (role == Qt::BackgroundRole)
        return QColorConstants::White;
    else if (role == Qt::ForegroundRole)
        return QColorConstants::Black;

    return {};
}
