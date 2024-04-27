#include <QApplication>
#include <QTableView>
#include <QStringListModel>

int main(int argc, char *argv[])
{
    QApplication::setStyle("fusion");
    QApplication a(argc, argv);

    QStringListModel model({"A", "B", "C", "D"});
    QTableView view;
    view.setModel((&model));
    view.show();

    return a.exec();
}
