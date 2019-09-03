#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        QString newfile;
        QTextStream stream(&file);
        for (int i = 0; i < 576; i++)
        {
            if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + QString("0") + QString(" "));
            else
                newfile.append(QString("0") + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
    MainWindow w;
    w.show();

    return a.exec();
}
