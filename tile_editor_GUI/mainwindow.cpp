#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Tile Editor");    


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tile_0_clicked()
{
    tile_num = QString::fromUtf8("0");
}

void MainWindow::on_tile_1_clicked()
{
    tile_num = QString::fromUtf8("1");
}

void MainWindow::on_tile_2_clicked()
{
    tile_num = QString::fromUtf8("2");
}


void MainWindow::on_tile_3_clicked()
{
    tile_num = QString::fromUtf8("3");
}


void MainWindow::on_tile_4_clicked()
{
    tile_num = QString::fromUtf8("4");
}


void MainWindow::on_tile_5_clicked()
{
    tile_num = QString::fromUtf8("5");
}


void MainWindow::on_tile_6_clicked()
{
    tile_num = QString::fromUtf8("6");
}

void MainWindow::on_tile_7_clicked()
{
    tile_num = QString::fromUtf8("7");
}

void MainWindow::on_tile_8_clicked()
{
    tile_num = QString::fromUtf8("8");
}

void MainWindow::on_tile_9_clicked()
{
    tile_num = QString::fromUtf8("9");
}

void MainWindow::on_tile_10_clicked()
{
    tile_num = QString::fromUtf8("10");
}

void MainWindow::on_tile_11_clicked()
{
    tile_num = QString::fromUtf8("11");
}

void MainWindow::on_tile_12_clicked()
{
    tile_num = QString::fromUtf8("12");
}

void MainWindow::on_tile_13_clicked()
{
    tile_num = QString::fromUtf8("13");
}

void MainWindow::on_tile_14_clicked()
{
    tile_num = QString::fromUtf8("14");
}

void MainWindow::on_tile_15_clicked()
{
    tile_num = QString::fromUtf8("15");
}

void MainWindow::on_tile_16_clicked()
{
    tile_num = QString::fromUtf8("16");
}

void MainWindow::on_tile_17_clicked()
{
    tile_num = QString::fromUtf8("17");
}

void MainWindow::on_tile_18_clicked()
{
    tile_num = QString::fromUtf8("18");
}

void MainWindow::on_tile_19_clicked()
{
    tile_num = QString::fromUtf8("19");
}

void MainWindow::on_tile_20_clicked()
{
    tile_num = QString::fromUtf8("20");
}

void MainWindow::on_tile_21_clicked()
{
    tile_num = QString::fromUtf8("21");
}

void MainWindow::on_tile_22_clicked()
{
    tile_num = QString::fromUtf8("22");
}

void MainWindow::on_tile_23_clicked()
{
    tile_num = QString::fromUtf8("23");
}

void MainWindow::on_tile_24_clicked()
{
    tile_num = QString::fromUtf8("24");
}

void MainWindow::on_tile_25_clicked()
{
    tile_num = QString::fromUtf8("25");
}

void MainWindow::on_tile_26_clicked()
{
    tile_num = QString::fromUtf8("26");
}

void MainWindow::on_tile_27_clicked()
{
    tile_num = QString::fromUtf8("27");
}

void MainWindow::on_tile_28_clicked()
{
    tile_num = QString::fromUtf8("28");
}

void MainWindow::on_tile_29_clicked()
{
    tile_num = QString::fromUtf8("29");
}

void MainWindow::on_map_001_clicked()
{
    ui->map_001->setStyleSheet(QString::fromUtf8("#map_001 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_001:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 0;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum);
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i));
            else
                newfile.append(QString(" ") + temp.at(i));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_002_clicked()
{
    ui->map_002->setStyleSheet(QString::fromUtf8("#map_002 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_002:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 1;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_003_clicked()
{
    ui->map_003->setStyleSheet(QString::fromUtf8("#map_003 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_003:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 2;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_004_clicked()
{
    ui->map_004->setStyleSheet(QString::fromUtf8("#map_004 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_004:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 3;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_005_clicked()
{
    ui->map_005->setStyleSheet(QString::fromUtf8("#map_005 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_005:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 4;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_006_clicked()
{
    ui->map_006->setStyleSheet(QString::fromUtf8("#map_006 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_006:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 5;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_007_clicked()
{
    ui->map_007->setStyleSheet(QString::fromUtf8("#map_007 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_007:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 6;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_008_clicked()
{
    ui->map_008->setStyleSheet(QString::fromUtf8("#map_008 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_008:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 7;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_009_clicked()
{
    ui->map_009->setStyleSheet(QString::fromUtf8("#map_009 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_009:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 8;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_010_clicked()
{
    ui->map_010->setStyleSheet(QString::fromUtf8("#map_010 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_010:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 9;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_011_clicked()
{
    ui->map_011->setStyleSheet(QString::fromUtf8("#map_011 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_011:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 10;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_012_clicked()
{
    ui->map_012->setStyleSheet(QString::fromUtf8("#map_012 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_012:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 11;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_013_clicked()
{
    ui->map_013->setStyleSheet(QString::fromUtf8("#map_013 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_013:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 12;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_014_clicked()
{
    ui->map_014->setStyleSheet(QString::fromUtf8("#map_014 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_014:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 13;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_015_clicked()
{
    ui->map_015->setStyleSheet(QString::fromUtf8("#map_015 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_015:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 14;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_016_clicked()
{
    ui->map_016->setStyleSheet(QString::fromUtf8("#map_016 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_016:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 15;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_017_clicked()
{
    ui->map_017->setStyleSheet(QString::fromUtf8("#map_017 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_017:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 16;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_018_clicked()
{
    ui->map_018->setStyleSheet(QString::fromUtf8("#map_018 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_018:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 17;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_019_clicked()
{
    ui->map_019->setStyleSheet(QString::fromUtf8("#map_019 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_019:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 18;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_020_clicked()
{
    ui->map_020->setStyleSheet(QString::fromUtf8("#map_020 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_020:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 19;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_021_clicked()
{
    ui->map_021->setStyleSheet(QString::fromUtf8("#map_021 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_021:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 20;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_022_clicked()
{
    ui->map_022->setStyleSheet(QString::fromUtf8("#map_022 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_022:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 21;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_023_clicked()
{
    ui->map_023->setStyleSheet(QString::fromUtf8("#map_023 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_023:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 22;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_024_clicked()
{
    ui->map_024->setStyleSheet(QString::fromUtf8("#map_024 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_024:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 23;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_025_clicked()
{
    ui->map_025->setStyleSheet(QString::fromUtf8("#map_025 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_025:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 24;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_026_clicked()
{
    ui->map_026->setStyleSheet(QString::fromUtf8("#map_026 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_026:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 25;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_027_clicked()
{
    ui->map_027->setStyleSheet(QString::fromUtf8("#map_027 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_027:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 26;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_028_clicked()
{
    ui->map_028->setStyleSheet(QString::fromUtf8("#map_028 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_028:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 27;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_029_clicked()
{
    ui->map_029->setStyleSheet(QString::fromUtf8("#map_029 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_029:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 28;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_030_clicked()
{
    ui->map_030->setStyleSheet(QString::fromUtf8("#map_030 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_030:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 29;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_031_clicked()
{
    ui->map_031->setStyleSheet(QString::fromUtf8("#map_031 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_031:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 30;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_032_clicked()
{
    ui->map_032->setStyleSheet(QString::fromUtf8("#map_032 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_032:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 31;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_033_clicked()
{
    ui->map_033->setStyleSheet(QString::fromUtf8("#map_033 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_033:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 32;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_034_clicked()
{
    ui->map_034->setStyleSheet(QString::fromUtf8("#map_034 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_034:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 33;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_035_clicked()
{
    ui->map_035->setStyleSheet(QString::fromUtf8("#map_035 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_035:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 34;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_036_clicked()
{
    ui->map_036->setStyleSheet(QString::fromUtf8("#map_036 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_036:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 35;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_037_clicked()
{
    ui->map_037->setStyleSheet(QString::fromUtf8("#map_037 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_037:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 36;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_038_clicked()
{
    ui->map_038->setStyleSheet(QString::fromUtf8("#map_038 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_038:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 37;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_039_clicked()
{
    ui->map_039->setStyleSheet(QString::fromUtf8("#map_039 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_039:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 38;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_040_clicked()
{
    ui->map_040->setStyleSheet(QString::fromUtf8("#map_040 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_040:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 39;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_041_clicked()
{
    ui->map_041->setStyleSheet(QString::fromUtf8("#map_041 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_041:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 40;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_042_clicked()
{
    ui->map_042->setStyleSheet(QString::fromUtf8("#map_042 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_042:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 41;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_043_clicked()
{
    ui->map_043->setStyleSheet(QString::fromUtf8("#map_043 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_043:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 42;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_044_clicked()
{
    ui->map_044->setStyleSheet(QString::fromUtf8("#map_044 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_044:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 43;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_045_clicked()
{
    ui->map_045->setStyleSheet(QString::fromUtf8("#map_045 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_045:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 44;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_046_clicked()
{
    ui->map_046->setStyleSheet(QString::fromUtf8("#map_046 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_046:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 45;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_047_clicked()
{
    ui->map_047->setStyleSheet(QString::fromUtf8("#map_047 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_047:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 46;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_048_clicked()
{
    ui->map_048->setStyleSheet(QString::fromUtf8("#map_048 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_048:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 47;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_049_clicked()
{
    ui->map_049->setStyleSheet(QString::fromUtf8("#map_049 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_049:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 48;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_050_clicked()
{
    ui->map_050->setStyleSheet(QString::fromUtf8("#map_050 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_050:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 49;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_051_clicked()
{
    ui->map_051->setStyleSheet(QString::fromUtf8("#map_051 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_051:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 50;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_052_clicked()
{
    ui->map_052->setStyleSheet(QString::fromUtf8("#map_052 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_052:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 51;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_053_clicked()
{
    ui->map_053->setStyleSheet(QString::fromUtf8("#map_053 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_053:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 52;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_054_clicked()
{
    ui->map_054->setStyleSheet(QString::fromUtf8("#map_054 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_054:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 53;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_055_clicked()
{
    ui->map_055->setStyleSheet(QString::fromUtf8("#map_055 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_055:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 54;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_056_clicked()
{
    ui->map_056->setStyleSheet(QString::fromUtf8("#map_056 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_056:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 55;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_057_clicked()
{
    ui->map_057->setStyleSheet(QString::fromUtf8("#map_057 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_057:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 56;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_058_clicked()
{
    ui->map_058->setStyleSheet(QString::fromUtf8("#map_058 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_058:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 57;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_059_clicked()
{
    ui->map_059->setStyleSheet(QString::fromUtf8("#map_059 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_059:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 58;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_060_clicked()
{
    ui->map_060->setStyleSheet(QString::fromUtf8("#map_060 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_060:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 59;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_061_clicked()
{
    ui->map_061->setStyleSheet(QString::fromUtf8("#map_061 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_061:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 60;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_062_clicked()
{
    ui->map_062->setStyleSheet(QString::fromUtf8("#map_062 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_062:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 61;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_063_clicked()
{
    ui->map_063->setStyleSheet(QString::fromUtf8("#map_063 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_063:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 62;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_064_clicked()
{
    ui->map_064->setStyleSheet(QString::fromUtf8("#map_064 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_064:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 63;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_065_clicked()
{
    ui->map_065->setStyleSheet(QString::fromUtf8("#map_065 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_065:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 64;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_066_clicked()
{
    ui->map_066->setStyleSheet(QString::fromUtf8("#map_066 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_066:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 65;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_067_clicked()
{
    ui->map_067->setStyleSheet(QString::fromUtf8("#map_067 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_067:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 66;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_068_clicked()
{
    ui->map_068->setStyleSheet(QString::fromUtf8("#map_068 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_068:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 67;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_069_clicked()
{
    ui->map_069->setStyleSheet(QString::fromUtf8("#map_069 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_069:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 68;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_070_clicked()
{
    ui->map_070->setStyleSheet(QString::fromUtf8("#map_070 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_070:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 69;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_071_clicked()
{
    ui->map_071->setStyleSheet(QString::fromUtf8("#map_071 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_071:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 70;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_072_clicked()
{
    ui->map_072->setStyleSheet(QString::fromUtf8("#map_072 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_072:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 71;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_073_clicked()
{
    ui->map_073->setStyleSheet(QString::fromUtf8("#map_073 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_073:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 72;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_074_clicked()
{
    ui->map_074->setStyleSheet(QString::fromUtf8("#map_074 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_074:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 73;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_075_clicked()
{
    ui->map_075->setStyleSheet(QString::fromUtf8("#map_075 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_075:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 74;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_076_clicked()
{
    ui->map_076->setStyleSheet(QString::fromUtf8("#map_076 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_076:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 75;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_077_clicked()
{
    ui->map_077->setStyleSheet(QString::fromUtf8("#map_077 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_077:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 76;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_078_clicked()
{
    ui->map_078->setStyleSheet(QString::fromUtf8("#map_078 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_078:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 77;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_079_clicked()
{
    ui->map_079->setStyleSheet(QString::fromUtf8("#map_079 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_079:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 78;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_080_clicked()
{
    ui->map_080->setStyleSheet(QString::fromUtf8("#map_080 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_080:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 79;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_081_clicked()
{
    ui->map_081->setStyleSheet(QString::fromUtf8("#map_081 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_081:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 80;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_082_clicked()
{
    ui->map_082->setStyleSheet(QString::fromUtf8("#map_082 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_082:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 81;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_083_clicked()
{
    ui->map_083->setStyleSheet(QString::fromUtf8("#map_083 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_083:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 82;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_084_clicked()
{
    ui->map_084->setStyleSheet(QString::fromUtf8("#map_084 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_084:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 83;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_085_clicked()
{
    ui->map_085->setStyleSheet(QString::fromUtf8("#map_085 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_085:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 84;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_086_clicked()
{
    ui->map_086->setStyleSheet(QString::fromUtf8("#map_086 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_086:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 85;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_087_clicked()
{
    ui->map_087->setStyleSheet(QString::fromUtf8("#map_087 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_087:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 86;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_088_clicked()
{
    ui->map_088->setStyleSheet(QString::fromUtf8("#map_088 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_088:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 87;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_089_clicked()
{
    ui->map_089->setStyleSheet(QString::fromUtf8("#map_089 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_089:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 88;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_090_clicked()
{
    ui->map_090->setStyleSheet(QString::fromUtf8("#map_090 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_090:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 89;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_091_clicked()
{
    ui->map_091->setStyleSheet(QString::fromUtf8("#map_091 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_091:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 90;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_092_clicked()
{
    ui->map_092->setStyleSheet(QString::fromUtf8("#map_092 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_092:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 91;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_093_clicked()
{
    ui->map_093->setStyleSheet(QString::fromUtf8("#map_093 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_093:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 92;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_094_clicked()
{
    ui->map_094->setStyleSheet(QString::fromUtf8("#map_094 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_094:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 93;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_095_clicked()
{
    ui->map_095->setStyleSheet(QString::fromUtf8("#map_095 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_095:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 94;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_096_clicked()
{
    ui->map_096->setStyleSheet(QString::fromUtf8("#map_096 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_096:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 95;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_097_clicked()
{
    ui->map_097->setStyleSheet(QString::fromUtf8("#map_097 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_097:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 96;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_098_clicked()
{
    ui->map_098->setStyleSheet(QString::fromUtf8("#map_098 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_098:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 97;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_099_clicked()
{
    ui->map_099->setStyleSheet(QString::fromUtf8("#map_099 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_099:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 98;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_100_clicked()
{
    ui->map_100->setStyleSheet(QString::fromUtf8("#map_100 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_100:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 99;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_101_clicked()
{
    ui->map_101->setStyleSheet(QString::fromUtf8("#map_101 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_101:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 100;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_102_clicked()
{
    ui->map_102->setStyleSheet(QString::fromUtf8("#map_102 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_102:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 101;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_103_clicked()
{
    ui->map_103->setStyleSheet(QString::fromUtf8("#map_103 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_103:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 102;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_104_clicked()
{
    ui->map_104->setStyleSheet(QString::fromUtf8("#map_104 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_104:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 103;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_105_clicked()
{
    ui->map_105->setStyleSheet(QString::fromUtf8("#map_105 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_105:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 104;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_106_clicked()
{
    ui->map_106->setStyleSheet(QString::fromUtf8("#map_106 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_106:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 105;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_107_clicked()
{
    ui->map_107->setStyleSheet(QString::fromUtf8("#map_107 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_107:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 106;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_108_clicked()
{
    ui->map_108->setStyleSheet(QString::fromUtf8("#map_108 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_108:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 107;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_109_clicked()
{
    ui->map_109->setStyleSheet(QString::fromUtf8("#map_109 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_109:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 108;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_110_clicked()
{
    ui->map_110->setStyleSheet(QString::fromUtf8("#map_110 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_110:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 109;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_111_clicked()
{
    ui->map_111->setStyleSheet(QString::fromUtf8("#map_111 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_111:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 110;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_112_clicked()
{
    ui->map_112->setStyleSheet(QString::fromUtf8("#map_112 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_112:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 111;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_113_clicked()
{
    ui->map_113->setStyleSheet(QString::fromUtf8("#map_113 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_113:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 112;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_114_clicked()
{
    ui->map_114->setStyleSheet(QString::fromUtf8("#map_114 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_114:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 113;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_115_clicked()
{
    ui->map_115->setStyleSheet(QString::fromUtf8("#map_115 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_115:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 114;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_116_clicked()
{
    ui->map_116->setStyleSheet(QString::fromUtf8("#map_116 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_116:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 115;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_117_clicked()
{
    ui->map_117->setStyleSheet(QString::fromUtf8("#map_117 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_117:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 116;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_118_clicked()
{
    ui->map_118->setStyleSheet(QString::fromUtf8("#map_118 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_118:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 117;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_119_clicked()
{
    ui->map_119->setStyleSheet(QString::fromUtf8("#map_119 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_119:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 118;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_120_clicked()
{
    ui->map_120->setStyleSheet(QString::fromUtf8("#map_120 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_120:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 119;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_121_clicked()
{
    ui->map_121->setStyleSheet(QString::fromUtf8("#map_121 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_121:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 120;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_122_clicked()
{
    ui->map_122->setStyleSheet(QString::fromUtf8("#map_122 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_122:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 121;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_123_clicked()
{
    ui->map_123->setStyleSheet(QString::fromUtf8("#map_123 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_123:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 122;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_124_clicked()
{
    ui->map_124->setStyleSheet(QString::fromUtf8("#map_124 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_124:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 123;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_125_clicked()
{
    ui->map_125->setStyleSheet(QString::fromUtf8("#map_125 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_125:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 124;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_126_clicked()
{
    ui->map_126->setStyleSheet(QString::fromUtf8("#map_126 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_126:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 125;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_127_clicked()
{
    ui->map_127->setStyleSheet(QString::fromUtf8("#map_127 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_127:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 126;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_128_clicked()
{
    ui->map_128->setStyleSheet(QString::fromUtf8("#map_128 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_128:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 127;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_129_clicked()
{
    ui->map_129->setStyleSheet(QString::fromUtf8("#map_129 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_129:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 128;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_130_clicked()
{
    ui->map_130->setStyleSheet(QString::fromUtf8("#map_130 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_130:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 129;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_131_clicked()
{
    ui->map_131->setStyleSheet(QString::fromUtf8("#map_131 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_131:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 130;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_132_clicked()
{
    ui->map_132->setStyleSheet(QString::fromUtf8("#map_132 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_132:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 131;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_133_clicked()
{
    ui->map_133->setStyleSheet(QString::fromUtf8("#map_133 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_133:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 132;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_134_clicked()
{
    ui->map_134->setStyleSheet(QString::fromUtf8("#map_134 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_134:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 133;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_135_clicked()
{
    ui->map_135->setStyleSheet(QString::fromUtf8("#map_135 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_135:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 134;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_136_clicked()
{
    ui->map_136->setStyleSheet(QString::fromUtf8("#map_136 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_136:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 135;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_137_clicked()
{
    ui->map_137->setStyleSheet(QString::fromUtf8("#map_137 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_137:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 136;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_138_clicked()
{
    ui->map_138->setStyleSheet(QString::fromUtf8("#map_138 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_138:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 137;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_139_clicked()
{
    ui->map_139->setStyleSheet(QString::fromUtf8("#map_139 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_139:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 138;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_140_clicked()
{
    ui->map_140->setStyleSheet(QString::fromUtf8("#map_140 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_140:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 139;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_141_clicked()
{
    ui->map_141->setStyleSheet(QString::fromUtf8("#map_141 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_141:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 140;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_142_clicked()
{
    ui->map_142->setStyleSheet(QString::fromUtf8("#map_142 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_142:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 141;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_143_clicked()
{
    ui->map_143->setStyleSheet(QString::fromUtf8("#map_143 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_143:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 142;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_144_clicked()
{
    ui->map_144->setStyleSheet(QString::fromUtf8("#map_144 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_144:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 143;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_145_clicked()
{
    ui->map_145->setStyleSheet(QString::fromUtf8("#map_145 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_145:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 144;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_146_clicked()
{
    ui->map_146->setStyleSheet(QString::fromUtf8("#map_146 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_146:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 145;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_147_clicked()
{
    ui->map_147->setStyleSheet(QString::fromUtf8("#map_147 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_147:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 146;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_148_clicked()
{
    ui->map_148->setStyleSheet(QString::fromUtf8("#map_148 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_148:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 147;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_149_clicked()
{
    ui->map_149->setStyleSheet(QString::fromUtf8("#map_149 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_149:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 148;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_150_clicked()
{
    ui->map_150->setStyleSheet(QString::fromUtf8("#map_150 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_150:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 149;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_151_clicked()
{
    ui->map_151->setStyleSheet(QString::fromUtf8("#map_151 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_151:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 150;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_152_clicked()
{
    ui->map_152->setStyleSheet(QString::fromUtf8("#map_152 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_152:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 151;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_153_clicked()
{
    ui->map_153->setStyleSheet(QString::fromUtf8("#map_153 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_153:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 152;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_154_clicked()
{
    ui->map_154->setStyleSheet(QString::fromUtf8("#map_154 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_154:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 153;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_155_clicked()
{
    ui->map_155->setStyleSheet(QString::fromUtf8("#map_155 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_155:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 154;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_156_clicked()
{
    ui->map_156->setStyleSheet(QString::fromUtf8("#map_156 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_156:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 155;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_157_clicked()
{
    ui->map_157->setStyleSheet(QString::fromUtf8("#map_157 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_157:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 156;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_158_clicked()
{
    ui->map_158->setStyleSheet(QString::fromUtf8("#map_158 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_158:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 157;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_159_clicked()
{
    ui->map_159->setStyleSheet(QString::fromUtf8("#map_159 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_159:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 158;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_160_clicked()
{
    ui->map_160->setStyleSheet(QString::fromUtf8("#map_160 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_160:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 159;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_161_clicked()
{
    ui->map_161->setStyleSheet(QString::fromUtf8("#map_161 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_161:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 160;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_162_clicked()
{
    ui->map_162->setStyleSheet(QString::fromUtf8("#map_162 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_162:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 161;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_163_clicked()
{
    ui->map_163->setStyleSheet(QString::fromUtf8("#map_163 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_163:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 162;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_164_clicked()
{
    ui->map_164->setStyleSheet(QString::fromUtf8("#map_164 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_164:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 163;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_165_clicked()
{
    ui->map_165->setStyleSheet(QString::fromUtf8("#map_165 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_165:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 164;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_166_clicked()
{
    ui->map_166->setStyleSheet(QString::fromUtf8("#map_166 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_166:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 165;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_167_clicked()
{
    ui->map_167->setStyleSheet(QString::fromUtf8("#map_167 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_167:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 166;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_168_clicked()
{
    ui->map_168->setStyleSheet(QString::fromUtf8("#map_168 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_168:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 167;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_169_clicked()
{
    ui->map_169->setStyleSheet(QString::fromUtf8("#map_169 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_169:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 168;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_170_clicked()
{
    ui->map_170->setStyleSheet(QString::fromUtf8("#map_170 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_170:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 169;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_171_clicked()
{
    ui->map_171->setStyleSheet(QString::fromUtf8("#map_171 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_171:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 170;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_172_clicked()
{
    ui->map_172->setStyleSheet(QString::fromUtf8("#map_172 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_172:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 171;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_173_clicked()
{
    ui->map_173->setStyleSheet(QString::fromUtf8("#map_173 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_173:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 172;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_174_clicked()
{
    ui->map_174->setStyleSheet(QString::fromUtf8("#map_174 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_174:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 173;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_175_clicked()
{
    ui->map_175->setStyleSheet(QString::fromUtf8("#map_175 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_175:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 174;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_176_clicked()
{
    ui->map_176->setStyleSheet(QString::fromUtf8("#map_176 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_176:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 175;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_177_clicked()
{
    ui->map_177->setStyleSheet(QString::fromUtf8("#map_177 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_177:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 176;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_178_clicked()
{
    ui->map_178->setStyleSheet(QString::fromUtf8("#map_178 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_178:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 177;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_179_clicked()
{
    ui->map_179->setStyleSheet(QString::fromUtf8("#map_179 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_179:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 178;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_180_clicked()
{
    ui->map_180->setStyleSheet(QString::fromUtf8("#map_180 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_180:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 179;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_181_clicked()
{
    ui->map_181->setStyleSheet(QString::fromUtf8("#map_181 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_181:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 180;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_182_clicked()
{
    ui->map_182->setStyleSheet(QString::fromUtf8("#map_182 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_182:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 181;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_183_clicked()
{
    ui->map_183->setStyleSheet(QString::fromUtf8("#map_183 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_183:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 182;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_184_clicked()
{
    ui->map_184->setStyleSheet(QString::fromUtf8("#map_184 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_184:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 183;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_185_clicked()
{
    ui->map_185->setStyleSheet(QString::fromUtf8("#map_185 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_185:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 184;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_186_clicked()
{
    ui->map_186->setStyleSheet(QString::fromUtf8("#map_186 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_186:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 185;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_187_clicked()
{
    ui->map_187->setStyleSheet(QString::fromUtf8("#map_187 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_187:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 186;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_188_clicked()
{
    ui->map_188->setStyleSheet(QString::fromUtf8("#map_188 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_188:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 187;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_189_clicked()
{
    ui->map_189->setStyleSheet(QString::fromUtf8("#map_189 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_189:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 188;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_190_clicked()
{
    ui->map_190->setStyleSheet(QString::fromUtf8("#map_190 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_190:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 189;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_191_clicked()
{
    ui->map_191->setStyleSheet(QString::fromUtf8("#map_191 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_191:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 190;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_192_clicked()
{
    ui->map_192->setStyleSheet(QString::fromUtf8("#map_192 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_192:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 191;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_193_clicked()
{
    ui->map_193->setStyleSheet(QString::fromUtf8("#map_193 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_193:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 192;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_194_clicked()
{
    ui->map_194->setStyleSheet(QString::fromUtf8("#map_194 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_194:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 193;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_195_clicked()
{
    ui->map_195->setStyleSheet(QString::fromUtf8("#map_195 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_195:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 194;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_196_clicked()
{
    ui->map_196->setStyleSheet(QString::fromUtf8("#map_196 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_196:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 195;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_197_clicked()
{
    ui->map_197->setStyleSheet(QString::fromUtf8("#map_197 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_197:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 196;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_198_clicked()
{
    ui->map_198->setStyleSheet(QString::fromUtf8("#map_198 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_198:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 197;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_199_clicked()
{
    ui->map_199->setStyleSheet(QString::fromUtf8("#map_199 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_199:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 199;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_200_clicked()
{
    ui->map_200->setStyleSheet(QString::fromUtf8("#map_200 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_200:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 199;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_201_clicked()
{
    ui->map_201->setStyleSheet(QString::fromUtf8("#map_201 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_201:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 200;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_202_clicked()
{
    ui->map_202->setStyleSheet(QString::fromUtf8("#map_202 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_202:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 201;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_203_clicked()
{
    ui->map_203->setStyleSheet(QString::fromUtf8("#map_203 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_203:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 202;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_204_clicked()
{
    ui->map_204->setStyleSheet(QString::fromUtf8("#map_204 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_204:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 203;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_205_clicked()
{
    ui->map_205->setStyleSheet(QString::fromUtf8("#map_205 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_205:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 204;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_206_clicked()
{
    ui->map_206->setStyleSheet(QString::fromUtf8("#map_206 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_206:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 205;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_207_clicked()
{
    ui->map_207->setStyleSheet(QString::fromUtf8("#map_207 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_207:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 206;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_208_clicked()
{
    ui->map_208->setStyleSheet(QString::fromUtf8("#map_208 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_208:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 207;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_209_clicked()
{
    ui->map_209->setStyleSheet(QString::fromUtf8("#map_209 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_209:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 208;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_210_clicked()
{
    ui->map_210->setStyleSheet(QString::fromUtf8("#map_210 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_210:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 209;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_211_clicked()
{
    ui->map_211->setStyleSheet(QString::fromUtf8("#map_211 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_211:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 210;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_212_clicked()
{
    ui->map_212->setStyleSheet(QString::fromUtf8("#map_212 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_212:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 211;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_213_clicked()
{
    ui->map_213->setStyleSheet(QString::fromUtf8("#map_213 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_213:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 212;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_214_clicked()
{
    ui->map_214->setStyleSheet(QString::fromUtf8("#map_214 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_214:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 213;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_215_clicked()
{
    ui->map_215->setStyleSheet(QString::fromUtf8("#map_215 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_215:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 214;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_216_clicked()
{
    ui->map_216->setStyleSheet(QString::fromUtf8("#map_216 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_216:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 215;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_217_clicked()
{
    ui->map_217->setStyleSheet(QString::fromUtf8("#map_217 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_217:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 216;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_218_clicked()
{
    ui->map_218->setStyleSheet(QString::fromUtf8("#map_218 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_218:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 217;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_219_clicked()
{
    ui->map_219->setStyleSheet(QString::fromUtf8("#map_219 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_219:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 218;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_220_clicked()
{
    ui->map_220->setStyleSheet(QString::fromUtf8("#map_220 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_220:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 219;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_221_clicked()
{
    ui->map_221->setStyleSheet(QString::fromUtf8("#map_221 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_221:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 220;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_222_clicked()
{
    ui->map_222->setStyleSheet(QString::fromUtf8("#map_222 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_222:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 221;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_223_clicked()
{
    ui->map_223->setStyleSheet(QString::fromUtf8("#map_223 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_223:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 222;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_224_clicked()
{
    ui->map_224->setStyleSheet(QString::fromUtf8("#map_224 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_224:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 223;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_225_clicked()
{
    ui->map_225->setStyleSheet(QString::fromUtf8("#map_225 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_225:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 224;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_226_clicked()
{
    ui->map_226->setStyleSheet(QString::fromUtf8("#map_226 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_226:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 225;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_227_clicked()
{
    ui->map_227->setStyleSheet(QString::fromUtf8("#map_227 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_227:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 226;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_228_clicked()
{
    ui->map_228->setStyleSheet(QString::fromUtf8("#map_228 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_228:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 227;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_229_clicked()
{
    ui->map_229->setStyleSheet(QString::fromUtf8("#map_229 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_229:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 228;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_230_clicked()
{
    ui->map_230->setStyleSheet(QString::fromUtf8("#map_230 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_230:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 229;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_231_clicked()
{
    ui->map_231->setStyleSheet(QString::fromUtf8("#map_231 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_231:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 230;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_232_clicked()
{
    ui->map_232->setStyleSheet(QString::fromUtf8("#map_232 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_232:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 231;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_233_clicked()
{
    ui->map_233->setStyleSheet(QString::fromUtf8("#map_233 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_233:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 232;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_234_clicked()
{
    ui->map_234->setStyleSheet(QString::fromUtf8("#map_234 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_234:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 233;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_235_clicked()
{
    ui->map_235->setStyleSheet(QString::fromUtf8("#map_235 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_235:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 234;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_236_clicked()
{
    ui->map_236->setStyleSheet(QString::fromUtf8("#map_236 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_236:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 235;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_237_clicked()
{
    ui->map_237->setStyleSheet(QString::fromUtf8("#map_237 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_237:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 236;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_238_clicked()
{
    ui->map_238->setStyleSheet(QString::fromUtf8("#map_238 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_238:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 237;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_239_clicked()
{
    ui->map_239->setStyleSheet(QString::fromUtf8("#map_239 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_239:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 238;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_240_clicked()
{
    ui->map_240->setStyleSheet(QString::fromUtf8("#map_240 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_240:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 239;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_241_clicked()
{
    ui->map_241->setStyleSheet(QString::fromUtf8("#map_241 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_241:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 240;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_242_clicked()
{
    ui->map_242->setStyleSheet(QString::fromUtf8("#map_242 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_242:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 241;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_243_clicked()
{
    ui->map_243->setStyleSheet(QString::fromUtf8("#map_243 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_243:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 242;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_244_clicked()
{
    ui->map_244->setStyleSheet(QString::fromUtf8("#map_244 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_244:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 243;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_245_clicked()
{
    ui->map_245->setStyleSheet(QString::fromUtf8("#map_245 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_245:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 244;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_246_clicked()
{
    ui->map_246->setStyleSheet(QString::fromUtf8("#map_246 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_246:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 245;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_247_clicked()
{
    ui->map_247->setStyleSheet(QString::fromUtf8("#map_247 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_247:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 246;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_248_clicked()
{
    ui->map_248->setStyleSheet(QString::fromUtf8("#map_248 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_248:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 247;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_249_clicked()
{
    ui->map_249->setStyleSheet(QString::fromUtf8("#map_249 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_249:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 248;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_250_clicked()
{
    ui->map_250->setStyleSheet(QString::fromUtf8("#map_250 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_250:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 249;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_251_clicked()
{
    ui->map_251->setStyleSheet(QString::fromUtf8("#map_251 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_251:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 250;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_252_clicked()
{
    ui->map_252->setStyleSheet(QString::fromUtf8("#map_252 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_252:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 251;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_253_clicked()
{
    ui->map_253->setStyleSheet(QString::fromUtf8("#map_253 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_253:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 252;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_254_clicked()
{
    ui->map_254->setStyleSheet(QString::fromUtf8("#map_254 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_254:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 253;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_255_clicked()
{
    ui->map_255->setStyleSheet(QString::fromUtf8("#map_255 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_255:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 254;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_256_clicked()
{
    ui->map_256->setStyleSheet(QString::fromUtf8("#map_256 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_256:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 255;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_257_clicked()
{
    ui->map_257->setStyleSheet(QString::fromUtf8("#map_257 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_257:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 256;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_258_clicked()
{
    ui->map_258->setStyleSheet(QString::fromUtf8("#map_258 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_258:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 257;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_259_clicked()
{
    ui->map_259->setStyleSheet(QString::fromUtf8("#map_259 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_259:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 258;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_260_clicked()
{
    ui->map_260->setStyleSheet(QString::fromUtf8("#map_260 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_260:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 259;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_261_clicked()
{
    ui->map_261->setStyleSheet(QString::fromUtf8("#map_261 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_261:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 260;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_262_clicked()
{
    ui->map_262->setStyleSheet(QString::fromUtf8("#map_262 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_262:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 261;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_263_clicked()
{
    ui->map_263->setStyleSheet(QString::fromUtf8("#map_263 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_263:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 262;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_264_clicked()
{
    ui->map_264->setStyleSheet(QString::fromUtf8("#map_264 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_264:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 263;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_265_clicked()
{
    ui->map_265->setStyleSheet(QString::fromUtf8("#map_265 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_265:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 264;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_266_clicked()
{
    ui->map_266->setStyleSheet(QString::fromUtf8("#map_266 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_266:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 265;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_267_clicked()
{
    ui->map_267->setStyleSheet(QString::fromUtf8("#map_267 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_267:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 266;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_268_clicked()
{
    ui->map_268->setStyleSheet(QString::fromUtf8("#map_268 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_268:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 267;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_269_clicked()
{
    ui->map_269->setStyleSheet(QString::fromUtf8("#map_269 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_269:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 268;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_270_clicked()
{
    ui->map_270->setStyleSheet(QString::fromUtf8("#map_270 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_270:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 269;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_271_clicked()
{
    ui->map_271->setStyleSheet(QString::fromUtf8("#map_271 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_271:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 270;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_272_clicked()
{
    ui->map_272->setStyleSheet(QString::fromUtf8("#map_272 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_272:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 271;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_273_clicked()
{
    ui->map_273->setStyleSheet(QString::fromUtf8("#map_273 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_273:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 272;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_274_clicked()
{
    ui->map_274->setStyleSheet(QString::fromUtf8("#map_274 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_274:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 273;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_275_clicked()
{
    ui->map_275->setStyleSheet(QString::fromUtf8("#map_275 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_275:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 274;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_276_clicked()
{
    ui->map_276->setStyleSheet(QString::fromUtf8("#map_276 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_276:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 275;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_277_clicked()
{
    ui->map_277->setStyleSheet(QString::fromUtf8("#map_277 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_277:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 276;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_278_clicked()
{
    ui->map_278->setStyleSheet(QString::fromUtf8("#map_278 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_278:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 277;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_279_clicked()
{
    ui->map_279->setStyleSheet(QString::fromUtf8("#map_279 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_279:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 278;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_280_clicked()
{
    ui->map_280->setStyleSheet(QString::fromUtf8("#map_280 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_280:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 279;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_281_clicked()
{
    ui->map_281->setStyleSheet(QString::fromUtf8("#map_281 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_281:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 280;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_282_clicked()
{
    ui->map_282->setStyleSheet(QString::fromUtf8("#map_282 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_282:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 281;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_283_clicked()
{
    ui->map_283->setStyleSheet(QString::fromUtf8("#map_283 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_283:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 282;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_284_clicked()
{
    ui->map_284->setStyleSheet(QString::fromUtf8("#map_284 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_284:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 283;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_285_clicked()
{
    ui->map_285->setStyleSheet(QString::fromUtf8("#map_285 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_285:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 284;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_286_clicked()
{
    ui->map_286->setStyleSheet(QString::fromUtf8("#map_286 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_286:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 285;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_287_clicked()
{
    ui->map_287->setStyleSheet(QString::fromUtf8("#map_287 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_287:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 286;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_288_clicked()
{
    ui->map_288->setStyleSheet(QString::fromUtf8("#map_288 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_288:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 287;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_289_clicked()
{
    ui->map_289->setStyleSheet(QString::fromUtf8("#map_289 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_289:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 288;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_290_clicked()
{
    ui->map_290->setStyleSheet(QString::fromUtf8("#map_290 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_290:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 289;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_291_clicked()
{
    ui->map_291->setStyleSheet(QString::fromUtf8("#map_291 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_291:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 290;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_292_clicked()
{
    ui->map_292->setStyleSheet(QString::fromUtf8("#map_292 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_292:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 291;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_293_clicked()
{
    ui->map_293->setStyleSheet(QString::fromUtf8("#map_293 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_293:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 292;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_294_clicked()
{
    ui->map_294->setStyleSheet(QString::fromUtf8("#map_294 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_294:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 293;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_295_clicked()
{
    ui->map_295->setStyleSheet(QString::fromUtf8("#map_295 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_295:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 294;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_296_clicked()
{
    ui->map_296->setStyleSheet(QString::fromUtf8("#map_296 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_296:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 295;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_297_clicked()
{
    ui->map_297->setStyleSheet(QString::fromUtf8("#map_297 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_297:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 296;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_298_clicked()
{
    ui->map_298->setStyleSheet(QString::fromUtf8("#map_298 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_298:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 297;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_299_clicked()
{
    ui->map_299->setStyleSheet(QString::fromUtf8("#map_299 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_299:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 298;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_300_clicked()
{
    ui->map_300->setStyleSheet(QString::fromUtf8("#map_300 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_300:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 299;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_301_clicked()
{
    ui->map_301->setStyleSheet(QString::fromUtf8("#map_301 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_301:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 300;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_302_clicked()
{
    ui->map_302->setStyleSheet(QString::fromUtf8("#map_302 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_302:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 301;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_303_clicked()
{
    ui->map_303->setStyleSheet(QString::fromUtf8("#map_303 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_303:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 302;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_304_clicked()
{
    ui->map_304->setStyleSheet(QString::fromUtf8("#map_304 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_304:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 303;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_305_clicked()
{
    ui->map_305->setStyleSheet(QString::fromUtf8("#map_305 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_305:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 304;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_306_clicked()
{
    ui->map_306->setStyleSheet(QString::fromUtf8("#map_306 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_306:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 305;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_307_clicked()
{
    ui->map_307->setStyleSheet(QString::fromUtf8("#map_307 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_307:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 306;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_308_clicked()
{
    ui->map_308->setStyleSheet(QString::fromUtf8("#map_308 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_308:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 307;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_309_clicked()
{
    ui->map_309->setStyleSheet(QString::fromUtf8("#map_309 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_309:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 308;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_310_clicked()
{
    ui->map_310->setStyleSheet(QString::fromUtf8("#map_310 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_310:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 309;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_311_clicked()
{
    ui->map_311->setStyleSheet(QString::fromUtf8("#map_311 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_311:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 310;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_312_clicked()
{
    ui->map_312->setStyleSheet(QString::fromUtf8("#map_312 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_312:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 311;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_313_clicked()
{
    ui->map_313->setStyleSheet(QString::fromUtf8("#map_313 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_313:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 312;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_314_clicked()
{
    ui->map_314->setStyleSheet(QString::fromUtf8("#map_314 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_314:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 313;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_315_clicked()
{
    ui->map_315->setStyleSheet(QString::fromUtf8("#map_315 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_315:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 314;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_316_clicked()
{
    ui->map_316->setStyleSheet(QString::fromUtf8("#map_316 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_316:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 315;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_317_clicked()
{
    ui->map_317->setStyleSheet(QString::fromUtf8("#map_317 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_317:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 316;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_318_clicked()
{
    ui->map_318->setStyleSheet(QString::fromUtf8("#map_318 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_318:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 317;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_319_clicked()
{
    ui->map_319->setStyleSheet(QString::fromUtf8("#map_319 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_319:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 318;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_320_clicked()
{
    ui->map_320->setStyleSheet(QString::fromUtf8("#map_320 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_320:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 319;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_321_clicked()
{
    ui->map_321->setStyleSheet(QString::fromUtf8("#map_321 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_321:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 320;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_322_clicked()
{
    ui->map_322->setStyleSheet(QString::fromUtf8("#map_322 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_322:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 321;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_323_clicked()
{
    ui->map_323->setStyleSheet(QString::fromUtf8("#map_323 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_323:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 322;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_324_clicked()
{
    ui->map_324->setStyleSheet(QString::fromUtf8("#map_324 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_324:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 323;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_325_clicked()
{
    ui->map_325->setStyleSheet(QString::fromUtf8("#map_325 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_325:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 324;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_326_clicked()
{
    ui->map_326->setStyleSheet(QString::fromUtf8("#map_326 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_326:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 325;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_327_clicked()
{
    ui->map_327->setStyleSheet(QString::fromUtf8("#map_327 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_327:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 326;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_328_clicked()
{
    ui->map_328->setStyleSheet(QString::fromUtf8("#map_328 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_328:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 327;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_329_clicked()
{
    ui->map_329->setStyleSheet(QString::fromUtf8("#map_329 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_329:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 328;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_330_clicked()
{
    ui->map_330->setStyleSheet(QString::fromUtf8("#map_330 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_330:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 329;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_331_clicked()
{
    ui->map_331->setStyleSheet(QString::fromUtf8("#map_331 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_331:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 330;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_332_clicked()
{
    ui->map_332->setStyleSheet(QString::fromUtf8("#map_332 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_332:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 331;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_333_clicked()
{
    ui->map_333->setStyleSheet(QString::fromUtf8("#map_333 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_333:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 332;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_334_clicked()
{
    ui->map_334->setStyleSheet(QString::fromUtf8("#map_334 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_334:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 333;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_335_clicked()
{
    ui->map_335->setStyleSheet(QString::fromUtf8("#map_335 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_335:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 334;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_336_clicked()
{
    ui->map_336->setStyleSheet(QString::fromUtf8("#map_336 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_336:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 335;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_337_clicked()
{
    ui->map_337->setStyleSheet(QString::fromUtf8("#map_337 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_337:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 336;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_338_clicked()
{
    ui->map_338->setStyleSheet(QString::fromUtf8("#map_338 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_338:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 337;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_339_clicked()
{
    ui->map_339->setStyleSheet(QString::fromUtf8("#map_339 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_339:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 338;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_340_clicked()
{
    ui->map_340->setStyleSheet(QString::fromUtf8("#map_340 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_340:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 339;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_341_clicked()
{
    ui->map_341->setStyleSheet(QString::fromUtf8("#map_341 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_341:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 340;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_342_clicked()
{
    ui->map_342->setStyleSheet(QString::fromUtf8("#map_342 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_342:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 341;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_343_clicked()
{
    ui->map_343->setStyleSheet(QString::fromUtf8("#map_343 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_343:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 342;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_344_clicked()
{
    ui->map_344->setStyleSheet(QString::fromUtf8("#map_344 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_344:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 343;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_345_clicked()
{
    ui->map_345->setStyleSheet(QString::fromUtf8("#map_345 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_345:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 344;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_346_clicked()
{
    ui->map_346->setStyleSheet(QString::fromUtf8("#map_346 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_346:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 345;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_347_clicked()
{
    ui->map_347->setStyleSheet(QString::fromUtf8("#map_347 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_347:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 346;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_348_clicked()
{
    ui->map_348->setStyleSheet(QString::fromUtf8("#map_348 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_348:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 347;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_349_clicked()
{
    ui->map_349->setStyleSheet(QString::fromUtf8("#map_349 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_349:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 348;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_350_clicked()
{
    ui->map_350->setStyleSheet(QString::fromUtf8("#map_350 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_350:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 349;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_351_clicked()
{
    ui->map_351->setStyleSheet(QString::fromUtf8("#map_351 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_351:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 350;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_352_clicked()
{
    ui->map_352->setStyleSheet(QString::fromUtf8("#map_352 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_352:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 351;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_353_clicked()
{
    ui->map_353->setStyleSheet(QString::fromUtf8("#map_353 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_353:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 352;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_354_clicked()
{
    ui->map_354->setStyleSheet(QString::fromUtf8("#map_354 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_354:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 353;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_355_clicked()
{
    ui->map_355->setStyleSheet(QString::fromUtf8("#map_355 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_355:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 354;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_356_clicked()
{
    ui->map_356->setStyleSheet(QString::fromUtf8("#map_356 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_356:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 355;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_357_clicked()
{
    ui->map_357->setStyleSheet(QString::fromUtf8("#map_357 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_357:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 356;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_358_clicked()
{
    ui->map_358->setStyleSheet(QString::fromUtf8("#map_358 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_358:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 357;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_359_clicked()
{
    ui->map_359->setStyleSheet(QString::fromUtf8("#map_359 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_359:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 358;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_360_clicked()
{
    ui->map_360->setStyleSheet(QString::fromUtf8("#map_360 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_360:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 359;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_361_clicked()
{
    ui->map_361->setStyleSheet(QString::fromUtf8("#map_361 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_361:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 360;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_362_clicked()
{
    ui->map_362->setStyleSheet(QString::fromUtf8("#map_362 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_362:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 361;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_363_clicked()
{
    ui->map_363->setStyleSheet(QString::fromUtf8("#map_363 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_363:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 362;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_364_clicked()
{
    ui->map_364->setStyleSheet(QString::fromUtf8("#map_364 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_364:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 363;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_365_clicked()
{
    ui->map_365->setStyleSheet(QString::fromUtf8("#map_365 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_365:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 364;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_366_clicked()
{
    ui->map_366->setStyleSheet(QString::fromUtf8("#map_366 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_366:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 365;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_367_clicked()
{
    ui->map_367->setStyleSheet(QString::fromUtf8("#map_367 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_367:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 366;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_368_clicked()
{
    ui->map_368->setStyleSheet(QString::fromUtf8("#map_368 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_368:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 367;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_369_clicked()
{
    ui->map_369->setStyleSheet(QString::fromUtf8("#map_369 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_369:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 368;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_370_clicked()
{
    ui->map_370->setStyleSheet(QString::fromUtf8("#map_370 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_370:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 369;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_371_clicked()
{
    ui->map_371->setStyleSheet(QString::fromUtf8("#map_371 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_371:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 370;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_372_clicked()
{
    ui->map_372->setStyleSheet(QString::fromUtf8("#map_372 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_372:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 371;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_373_clicked()
{
    ui->map_373->setStyleSheet(QString::fromUtf8("#map_373 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_373:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 372;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_374_clicked()
{
    ui->map_374->setStyleSheet(QString::fromUtf8("#map_374 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_374:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 373;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_375_clicked()
{
    ui->map_375->setStyleSheet(QString::fromUtf8("#map_375 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_375:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 374;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_376_clicked()
{
    ui->map_376->setStyleSheet(QString::fromUtf8("#map_376 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_376:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 375;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_377_clicked()
{
    ui->map_377->setStyleSheet(QString::fromUtf8("#map_377 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_377:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 376;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_378_clicked()
{
    ui->map_378->setStyleSheet(QString::fromUtf8("#map_378 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_378:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 377;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_379_clicked()
{
    ui->map_379->setStyleSheet(QString::fromUtf8("#map_379 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_379:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 378;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_380_clicked()
{
    ui->map_380->setStyleSheet(QString::fromUtf8("#map_380 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_380:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 379;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_381_clicked()
{
    ui->map_381->setStyleSheet(QString::fromUtf8("#map_381 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_381:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 380;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_382_clicked()
{
    ui->map_382->setStyleSheet(QString::fromUtf8("#map_382 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_382:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 381;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_383_clicked()
{
    ui->map_383->setStyleSheet(QString::fromUtf8("#map_383 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_383:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 382;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_384_clicked()
{
    ui->map_384->setStyleSheet(QString::fromUtf8("#map_384 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_384:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 383;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_385_clicked()
{
    ui->map_385->setStyleSheet(QString::fromUtf8("#map_385 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_385:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 384;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_386_clicked()
{
    ui->map_386->setStyleSheet(QString::fromUtf8("#map_386 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_386:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 385;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_387_clicked()
{
    ui->map_387->setStyleSheet(QString::fromUtf8("#map_387 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_387:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 386;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_388_clicked()
{
    ui->map_388->setStyleSheet(QString::fromUtf8("#map_388 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_388:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 387;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}
void MainWindow::on_map_389_clicked()
{
    ui->map_389->setStyleSheet(QString::fromUtf8("#map_389 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_389:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 388;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_390_clicked()
{
    ui->map_390->setStyleSheet(QString::fromUtf8("#map_390 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_390:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 389;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_391_clicked()
{
    ui->map_391->setStyleSheet(QString::fromUtf8("#map_391 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_391:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 390;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_392_clicked()
{
    ui->map_392->setStyleSheet(QString::fromUtf8("#map_392 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_392:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 391;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_393_clicked()
{
    ui->map_393->setStyleSheet(QString::fromUtf8("#map_393 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_393:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 392;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_394_clicked()
{
    ui->map_394->setStyleSheet(QString::fromUtf8("#map_394 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_394:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 393;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_395_clicked()
{
    ui->map_395->setStyleSheet(QString::fromUtf8("#map_395 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_395:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 394;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_396_clicked()
{
    ui->map_296->setStyleSheet(QString::fromUtf8("#map_396 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_396:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 395;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_397_clicked()
{
    ui->map_397->setStyleSheet(QString::fromUtf8("#map_397 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_397:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 396;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_398_clicked()
{
    ui->map_398->setStyleSheet(QString::fromUtf8("#map_398 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_398:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 397;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_399_clicked()
{
    ui->map_399->setStyleSheet(QString::fromUtf8("#map_399 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_399:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 398;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_400_clicked()
{
    ui->map_400->setStyleSheet(QString::fromUtf8("#map_400 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_400:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 399;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_401_clicked()
{
    ui->map_401->setStyleSheet(QString::fromUtf8("#map_401 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_401:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 400;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_402_clicked()
{
    ui->map_402->setStyleSheet(QString::fromUtf8("#map_402 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_402:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 401;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_403_clicked()
{
    ui->map_403->setStyleSheet(QString::fromUtf8("#map_403 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_403:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 402;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_404_clicked()
{
    ui->map_404->setStyleSheet(QString::fromUtf8("#map_404 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_404:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 403;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_405_clicked()
{
    ui->map_405->setStyleSheet(QString::fromUtf8("#map_405 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_405:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 404;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_406_clicked()
{
    ui->map_406->setStyleSheet(QString::fromUtf8("#map_406 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_406:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 405;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_407_clicked()
{
    ui->map_407->setStyleSheet(QString::fromUtf8("#map_407 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_407:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 406;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_408_clicked()
{
    ui->map_408->setStyleSheet(QString::fromUtf8("#map_408 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_408:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 407;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_409_clicked()
{
    ui->map_409->setStyleSheet(QString::fromUtf8("#map_309 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_409:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 408;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_410_clicked()
{
    ui->map_410->setStyleSheet(QString::fromUtf8("#map_410 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_410:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 409;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_411_clicked()
{
    ui->map_411->setStyleSheet(QString::fromUtf8("#map_411 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_411:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 410;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_412_clicked()
{
    ui->map_412->setStyleSheet(QString::fromUtf8("#map_412 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_412:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 411;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_413_clicked()
{
    ui->map_413->setStyleSheet(QString::fromUtf8("#map_413 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_413:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 412;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_414_clicked()
{
    ui->map_414->setStyleSheet(QString::fromUtf8("#map_414 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_414:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 413;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_415_clicked()
{
    ui->map_415->setStyleSheet(QString::fromUtf8("#map_415 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_415:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 414;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_416_clicked()
{
    ui->map_416->setStyleSheet(QString::fromUtf8("#map_416 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_416:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 415;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_417_clicked()
{
    ui->map_417->setStyleSheet(QString::fromUtf8("#map_417 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_417:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 416;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_418_clicked()
{
    ui->map_418->setStyleSheet(QString::fromUtf8("#map_418 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_418:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 417;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_419_clicked()
{
    ui->map_419->setStyleSheet(QString::fromUtf8("#map_419 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_419:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 418;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_420_clicked()
{
    ui->map_420->setStyleSheet(QString::fromUtf8("#map_420 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_420:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 419;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_421_clicked()
{
    ui->map_421->setStyleSheet(QString::fromUtf8("#map_421 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_421:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 420;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_422_clicked()
{
    ui->map_422->setStyleSheet(QString::fromUtf8("#map_422 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_422:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 421;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_423_clicked()
{
    ui->map_423->setStyleSheet(QString::fromUtf8("#map_423 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_423:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 422;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_424_clicked()
{
    ui->map_424->setStyleSheet(QString::fromUtf8("#map_424 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_424:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 423;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_425_clicked()
{
    ui->map_425->setStyleSheet(QString::fromUtf8("#map_425 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_425:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 424;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_426_clicked()
{
    ui->map_426->setStyleSheet(QString::fromUtf8("#map_426 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_426:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 425;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_427_clicked()
{
    ui->map_427->setStyleSheet(QString::fromUtf8("#map_427 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_427:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 426;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_428_clicked()
{
    ui->map_428->setStyleSheet(QString::fromUtf8("#map_428 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_428:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 427;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_429_clicked()
{
    ui->map_429->setStyleSheet(QString::fromUtf8("#map_429 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_429:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 428;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_430_clicked()
{
    ui->map_430->setStyleSheet(QString::fromUtf8("#map_430 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_430:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 429;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_431_clicked()
{
    ui->map_431->setStyleSheet(QString::fromUtf8("#map_431 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_431:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 430;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_432_clicked()
{
    ui->map_432->setStyleSheet(QString::fromUtf8("#map_432 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_432:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 431;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_433_clicked()
{
    ui->map_433->setStyleSheet(QString::fromUtf8("#map_433 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_433:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 432;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_434_clicked()
{
    ui->map_434->setStyleSheet(QString::fromUtf8("#map_434 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_434:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 433;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_435_clicked()
{
    ui->map_435->setStyleSheet(QString::fromUtf8("#map_435 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_435:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 434;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_436_clicked()
{
    ui->map_436->setStyleSheet(QString::fromUtf8("#map_436 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_436:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 435;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_437_clicked()
{
    ui->map_437->setStyleSheet(QString::fromUtf8("#map_437 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_437:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 436;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_438_clicked()
{
    ui->map_438->setStyleSheet(QString::fromUtf8("#map_438 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_438:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 437;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_439_clicked()
{
    ui->map_439->setStyleSheet(QString::fromUtf8("#map_439 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_439:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 438;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_440_clicked()
{
    ui->map_440->setStyleSheet(QString::fromUtf8("#map_440 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_440:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 439;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_441_clicked()
{
    ui->map_441->setStyleSheet(QString::fromUtf8("#map_441 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_441:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 440;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_442_clicked()
{
    ui->map_442->setStyleSheet(QString::fromUtf8("#map_442 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_442:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 441;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_443_clicked()
{
    ui->map_443->setStyleSheet(QString::fromUtf8("#map_443 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_443:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 442;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_444_clicked()
{
    ui->map_444->setStyleSheet(QString::fromUtf8("#map_444 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_444:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 433;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_445_clicked()
{
    ui->map_445->setStyleSheet(QString::fromUtf8("#map_445 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_445:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 444;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_446_clicked()
{
    ui->map_446->setStyleSheet(QString::fromUtf8("#map_446 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_446:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 445;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_447_clicked()
{
    ui->map_447->setStyleSheet(QString::fromUtf8("#map_447 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_447:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 446;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_448_clicked()
{
    ui->map_448->setStyleSheet(QString::fromUtf8("#map_448 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_448:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 447;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_449_clicked()
{
    ui->map_449->setStyleSheet(QString::fromUtf8("#map_449 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_449:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 448;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_450_clicked()
{
    ui->map_450->setStyleSheet(QString::fromUtf8("#map_450 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_450:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 449;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_451_clicked()
{
    ui->map_451->setStyleSheet(QString::fromUtf8("#map_451 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_451:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 450;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_452_clicked()
{
    ui->map_452->setStyleSheet(QString::fromUtf8("#map_452 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_452:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 451;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_453_clicked()
{
    ui->map_453->setStyleSheet(QString::fromUtf8("#map_453 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_453:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 452;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_454_clicked()
{
    ui->map_454->setStyleSheet(QString::fromUtf8("#map_454 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_454:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 453;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_455_clicked()
{
    ui->map_455->setStyleSheet(QString::fromUtf8("#map_455 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_455:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 454;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_456_clicked()
{
    ui->map_456->setStyleSheet(QString::fromUtf8("#map_456 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_456:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 455;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_457_clicked()
{
    ui->map_457->setStyleSheet(QString::fromUtf8("#map_457 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_457:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 456;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_458_clicked()
{
    ui->map_458->setStyleSheet(QString::fromUtf8("#map_458 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_458:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 457;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_459_clicked()
{
    ui->map_459->setStyleSheet(QString::fromUtf8("#map_459 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_459:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 458;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_460_clicked()
{
    ui->map_460->setStyleSheet(QString::fromUtf8("#map_460 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_460:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 459;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_461_clicked()
{
    ui->map_461->setStyleSheet(QString::fromUtf8("#map_461 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_461:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 460;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_462_clicked()
{
    ui->map_462->setStyleSheet(QString::fromUtf8("#map_462 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_462:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 461;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_463_clicked()
{
    ui->map_463->setStyleSheet(QString::fromUtf8("#map_463 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_463:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 462;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_464_clicked()
{
    ui->map_464->setStyleSheet(QString::fromUtf8("#map_464 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_464:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 463;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_465_clicked()
{
    ui->map_465->setStyleSheet(QString::fromUtf8("#map_465 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_465:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 464;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_466_clicked()
{
    ui->map_466->setStyleSheet(QString::fromUtf8("#map_466 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_466:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 465;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_467_clicked()
{
    ui->map_467->setStyleSheet(QString::fromUtf8("#map_467 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_467:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 466;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_468_clicked()
{
    ui->map_468->setStyleSheet(QString::fromUtf8("#map_468 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_468:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 467;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_469_clicked()
{
    ui->map_469->setStyleSheet(QString::fromUtf8("#map_469 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_469:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 468;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_470_clicked()
{
    ui->map_470->setStyleSheet(QString::fromUtf8("#map_470 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_470:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 469;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_471_clicked()
{
    ui->map_471->setStyleSheet(QString::fromUtf8("#map_471 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_471:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 470;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_472_clicked()
{
    ui->map_472->setStyleSheet(QString::fromUtf8("#map_472 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_472:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 471;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_473_clicked()
{
    ui->map_473->setStyleSheet(QString::fromUtf8("#map_473 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_473:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 472;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_474_clicked()
{
    ui->map_474->setStyleSheet(QString::fromUtf8("#map_474 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_474:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 473;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_475_clicked()
{
    ui->map_375->setStyleSheet(QString::fromUtf8("#map_475 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_475:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 474;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_476_clicked()
{
    ui->map_476->setStyleSheet(QString::fromUtf8("#map_476 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_476:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 475;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_477_clicked()
{
    ui->map_477->setStyleSheet(QString::fromUtf8("#map_477 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_477:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 476;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_478_clicked()
{
    ui->map_378->setStyleSheet(QString::fromUtf8("#map_478 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_478:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 477;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_479_clicked()
{
    ui->map_479->setStyleSheet(QString::fromUtf8("#map_479 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_479:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 478;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_480_clicked()
{
    ui->map_480->setStyleSheet(QString::fromUtf8("#map_480 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_480:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 479;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_481_clicked()
{
    ui->map_481->setStyleSheet(QString::fromUtf8("#map_481 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_481:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 480;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_482_clicked()
{
    ui->map_482->setStyleSheet(QString::fromUtf8("#map_482 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_482:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 481;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_483_clicked()
{
    ui->map_483->setStyleSheet(QString::fromUtf8("#map_483 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_483:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 482;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_484_clicked()
{
    ui->map_484->setStyleSheet(QString::fromUtf8("#map_484 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_484:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 483;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_485_clicked()
{
    ui->map_485->setStyleSheet(QString::fromUtf8("#map_485 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_485:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 484;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_486_clicked()
{
    ui->map_486->setStyleSheet(QString::fromUtf8("#map_486 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_486:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 485;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_487_clicked()
{
    ui->map_487->setStyleSheet(QString::fromUtf8("#map_487 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_487:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 486;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_488_clicked()
{
    ui->map_488->setStyleSheet(QString::fromUtf8("#map_488 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_488:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 487;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_489_clicked()
{
    ui->map_489->setStyleSheet(QString::fromUtf8("#map_489 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_489:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 488;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_490_clicked()
{
    ui->map_490->setStyleSheet(QString::fromUtf8("#map_490 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_490:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 489;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_491_clicked()
{
    ui->map_491->setStyleSheet(QString::fromUtf8("#map_491 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_491:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 490;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_492_clicked()
{
    ui->map_492->setStyleSheet(QString::fromUtf8("#map_492 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_492:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 491;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_493_clicked()
{
    ui->map_493->setStyleSheet(QString::fromUtf8("#map_493 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_493:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 492;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_494_clicked()
{
    ui->map_494->setStyleSheet(QString::fromUtf8("#map_494 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_494:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 493;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_495_clicked()
{
    ui->map_495->setStyleSheet(QString::fromUtf8("#map_495 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_495:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 494;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_496_clicked()
{
    ui->map_496->setStyleSheet(QString::fromUtf8("#map_496 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_496:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 495;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_497_clicked()
{
    ui->map_497->setStyleSheet(QString::fromUtf8("#map_497 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_497:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 496;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_498_clicked()
{
    ui->map_498->setStyleSheet(QString::fromUtf8("#map_498 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_498:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 497;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_499_clicked()
{
    ui->map_499->setStyleSheet(QString::fromUtf8("#map_499 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_499:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 498;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_500_clicked()
{
    ui->map_500->setStyleSheet(QString::fromUtf8("#map_500 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_500:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 499;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_501_clicked()
{
    ui->map_501->setStyleSheet(QString::fromUtf8("#map_501 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_501:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 500;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_502_clicked()
{
    ui->map_502->setStyleSheet(QString::fromUtf8("#map_502 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_502:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 501;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_503_clicked()
{
    ui->map_503->setStyleSheet(QString::fromUtf8("#map_503 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_503:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 502;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_504_clicked()
{
    ui->map_504->setStyleSheet(QString::fromUtf8("#map_504 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_504:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 503;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_505_clicked()
{
    ui->map_505->setStyleSheet(QString::fromUtf8("#map_505 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_505:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 504;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_506_clicked()
{
    ui->map_506->setStyleSheet(QString::fromUtf8("#map_506 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_506:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 505;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_507_clicked()
{
    ui->map_507->setStyleSheet(QString::fromUtf8("#map_507 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_507:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 506;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_508_clicked()
{
    ui->map_508->setStyleSheet(QString::fromUtf8("#map_508 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_508:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 507;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_509_clicked()
{
    ui->map_509->setStyleSheet(QString::fromUtf8("#map_509 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_509:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 508;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_510_clicked()
{
    ui->map_510->setStyleSheet(QString::fromUtf8("#map_510 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_510:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 509;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_511_clicked()
{
    ui->map_511->setStyleSheet(QString::fromUtf8("#map_511 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_511:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 510;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_512_clicked()
{
    ui->map_512->setStyleSheet(QString::fromUtf8("#map_512 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_512:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 511;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_513_clicked()
{
    ui->map_513->setStyleSheet(QString::fromUtf8("#map_513 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_513:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 512;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_514_clicked()
{
    ui->map_514->setStyleSheet(QString::fromUtf8("#map_514 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_514:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 513;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_515_clicked()
{
    ui->map_515->setStyleSheet(QString::fromUtf8("#map_515 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_515:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 514;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_516_clicked()
{
    ui->map_516->setStyleSheet(QString::fromUtf8("#map_516 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_516:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 515;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_517_clicked()
{
    ui->map_517->setStyleSheet(QString::fromUtf8("#map_517 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_517:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 516;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_518_clicked()
{
    ui->map_518->setStyleSheet(QString::fromUtf8("#map_518 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_518:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 517;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_519_clicked()
{
    ui->map_519->setStyleSheet(QString::fromUtf8("#map_519 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_519:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 518;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_520_clicked()
{
    ui->map_520->setStyleSheet(QString::fromUtf8("#map_520 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_520:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 519;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_521_clicked()
{
    ui->map_521->setStyleSheet(QString::fromUtf8("#map_521 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_521:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 520;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_522_clicked()
{
    ui->map_522->setStyleSheet(QString::fromUtf8("#map_522 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_522:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 521;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_523_clicked()
{
    ui->map_523->setStyleSheet(QString::fromUtf8("#map_523 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_523:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 522;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_524_clicked()
{
    ui->map_524->setStyleSheet(QString::fromUtf8("#map_524 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_524:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 523;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_525_clicked()
{
    ui->map_525->setStyleSheet(QString::fromUtf8("#map_525 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_525:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 524;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_526_clicked()
{
    ui->map_526->setStyleSheet(QString::fromUtf8("#map_526 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_526:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 525;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_527_clicked()
{
    ui->map_527->setStyleSheet(QString::fromUtf8("#map_527 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_527:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 526;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_528_clicked()
{
    ui->map_528->setStyleSheet(QString::fromUtf8("#map_528 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_528:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 527;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_529_clicked()
{
    ui->map_529->setStyleSheet(QString::fromUtf8("#map_529 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_529:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 528;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_530_clicked()
{
    ui->map_530->setStyleSheet(QString::fromUtf8("#map_530 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_530:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 529;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_531_clicked()
{
    ui->map_531->setStyleSheet(QString::fromUtf8("#map_531 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_531:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 530;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_532_clicked()
{
    ui->map_532->setStyleSheet(QString::fromUtf8("#map_532 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_532:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 531;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_533_clicked()
{
    ui->map_533->setStyleSheet(QString::fromUtf8("#map_533 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_533:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 532;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_534_clicked()
{
    ui->map_534->setStyleSheet(QString::fromUtf8("#map_534 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_534:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 533;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_535_clicked()
{
    ui->map_535->setStyleSheet(QString::fromUtf8("#map_535 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_535:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 534;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_536_clicked()
{
    ui->map_536->setStyleSheet(QString::fromUtf8("#map_536 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_536:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 535;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_537_clicked()
{
    ui->map_537->setStyleSheet(QString::fromUtf8("#map_537 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_537:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 536;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_538_clicked()
{
    ui->map_538->setStyleSheet(QString::fromUtf8("#map_538 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_538:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 537;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_539_clicked()
{
    ui->map_539->setStyleSheet(QString::fromUtf8("#map_539 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_539:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 538;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_540_clicked()
{
    ui->map_540->setStyleSheet(QString::fromUtf8("#map_540 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_540:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 539;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_541_clicked()
{
    ui->map_541->setStyleSheet(QString::fromUtf8("#map_541 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_541:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 540;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_542_clicked()
{
    ui->map_542->setStyleSheet(QString::fromUtf8("#map_542 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_542:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 541;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_543_clicked()
{
    ui->map_543->setStyleSheet(QString::fromUtf8("#map_543 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_543:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 542;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_544_clicked()
{
    ui->map_544->setStyleSheet(QString::fromUtf8("#map_544 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_544:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 543;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_545_clicked()
{
    ui->map_545->setStyleSheet(QString::fromUtf8("#map_545 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_545:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 544;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_546_clicked()
{
    ui->map_546->setStyleSheet(QString::fromUtf8("#map_546 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_546:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 545;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_547_clicked()
{
    ui->map_547->setStyleSheet(QString::fromUtf8("#map_547 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_547:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 546;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_548_clicked()
{
    ui->map_548->setStyleSheet(QString::fromUtf8("#map_548 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_548:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 547;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_549_clicked()
{
    ui->map_549->setStyleSheet(QString::fromUtf8("#map_549 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_549:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 548;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_550_clicked()
{
    ui->map_550->setStyleSheet(QString::fromUtf8("#map_550 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_550:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 549;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_551_clicked()
{
    ui->map_551->setStyleSheet(QString::fromUtf8("#map_551 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_551:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 550;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_552_clicked()
{
    ui->map_552->setStyleSheet(QString::fromUtf8("#map_552 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_552:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 551;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_553_clicked()
{
    ui->map_553->setStyleSheet(QString::fromUtf8("#map_553 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_553:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 552;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_554_clicked()
{
    ui->map_554->setStyleSheet(QString::fromUtf8("#map_554 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_554:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 553;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_555_clicked()
{
    ui->map_555->setStyleSheet(QString::fromUtf8("#map_555 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_555:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 554;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_556_clicked()
{
    ui->map_556->setStyleSheet(QString::fromUtf8("#map_556 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_556:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 555;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_557_clicked()
{
    ui->map_557->setStyleSheet(QString::fromUtf8("#map_557 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_557:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 556;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_558_clicked()
{
    ui->map_558->setStyleSheet(QString::fromUtf8("#map_558 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_558:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 557;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_559_clicked()
{
    ui->map_559->setStyleSheet(QString::fromUtf8("#map_559 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_559:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 558;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_560_clicked()
{
    ui->map_560->setStyleSheet(QString::fromUtf8("#map_560 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_560:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 559;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_561_clicked()
{
    ui->map_561->setStyleSheet(QString::fromUtf8("#map_561 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_561:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 560;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_562_clicked()
{
    ui->map_562->setStyleSheet(QString::fromUtf8("#map_562 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_562:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 561;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_563_clicked()
{
    ui->map_563->setStyleSheet(QString::fromUtf8("#map_563 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_563:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 562;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_564_clicked()
{
    ui->map_564->setStyleSheet(QString::fromUtf8("#map_564 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_564:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 563;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_565_clicked()
{
    ui->map_565->setStyleSheet(QString::fromUtf8("#map_565 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_565:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 564;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_566_clicked()
{
    ui->map_566->setStyleSheet(QString::fromUtf8("#map_566 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_566:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 565;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_567_clicked()
{
    ui->map_567->setStyleSheet(QString::fromUtf8("#map_567 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_567:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 566;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_568_clicked()
{
    ui->map_568->setStyleSheet(QString::fromUtf8("#map_568 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_568:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 567;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_569_clicked()
{
    ui->map_569->setStyleSheet(QString::fromUtf8("#map_569 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_569:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 568;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_570_clicked()
{
    ui->map_570->setStyleSheet(QString::fromUtf8("#map_570 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_570:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 569;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_571_clicked()
{
    ui->map_571->setStyleSheet(QString::fromUtf8("#map_571 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_571:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 570;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_572_clicked()
{
    ui->map_572->setStyleSheet(QString::fromUtf8("#map_572 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_572:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 571;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_573_clicked()
{
    ui->map_573->setStyleSheet(QString::fromUtf8("#map_573 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_573:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 572;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_574_clicked()
{
    ui->map_574->setStyleSheet(QString::fromUtf8("#map_574 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_574:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 573;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_575_clicked()
{
    ui->map_575->setStyleSheet(QString::fromUtf8("#map_575 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_575:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 574;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}

void MainWindow::on_map_576_clicked()
{
    ui->map_576->setStyleSheet(QString::fromUtf8("#map_576 {\n"
    "background-color: transparent;\n"
    "border-image: url(:tiles/tile_") + tile_num + QString::fromUtf8(".png);\n"
    "background: none;\n"
    "border: none;\n"
    "background-repeat: none;\n"
    "}\n"
    "#map_576:pressed\n"
    "{\n"
    "   border-image: url(:);\n"
    "}"));

    QFile file("./platformer-fan-ling-hao-tian/src_tile/Saved_Map.txt");
    if ( file.open(QIODevice::ReadWrite) )
    {
        int num = 575;
        QString newnum = tile_num;
        QString oldfile;
        QString newfile;
        QTextStream stream(&file);
        while (!stream.atEnd()){
            oldfile.append(stream.readLine()+"\n");
        }
        QStringList temp = oldfile.split(QRegExp("\n|\\s|\\s\n"));
        for (int i = 0; i < temp.size(); i++)
        {
            if (i == num)
                newfile.append(newnum + QString(" "));
            else if ((i%32) == 0 && i > 0)
                newfile.append(QString("\n") + temp.at(i) + QString(" "));
            else
                newfile.append(temp.at(i) + QString(" "));
        }
        file.resize(0);
        stream << newfile << endl;
        file.close();
    }
}
