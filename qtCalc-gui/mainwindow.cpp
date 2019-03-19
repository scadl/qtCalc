#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :   QMainWindow(parent),  ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStringListModel(this);

    QStringList lines;
    lines << "Log of operations";

    model->setStringList(lines);
    ui->listView1->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAction1_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButtonAdd_clicked()
{
    // do adding

    int v1, v2, v3;

    v1 = ui->spinBox->value();
    v2 = ui->spinBox_2->value();

    v3 = v1 + v2;

    QString newline = "";
    QStringList lines = model->stringList();
    lines << QStringLiteral("%1 + %2 = %3").arg(v1).arg(v2).arg(v3);
    //lines << QString::number(v3);

    model->setStringList(lines);


    /*
    // intToQStr
    lines << QString::number(v3);

    // Get the position
    int rowPos = model->rowCount();

    // Enable add one or more rows
    model->insertRows(rowPos,1);

    // Get the row for Edit mode
    QModelIndex index = model->index(rowPos);

    // Enable item selection and put it edit mode
    ui->listView1->setCurrentIndex(index);
    //ui->listView1->edit(index);
    */
}

void MainWindow::on_pushButtonSubstr_clicked()
{
    int v1, v2, v3;

    v1 = ui->spinBox->value();
    v2 = ui->spinBox_2->value();

    v3 = v1 - v2;

    QString newline = "";
    QStringList lines = model->stringList();
    lines << QStringLiteral("%1 - %2 = %3").arg(v1).arg(v2).arg(v3);
    //lines << QString::number(v3);

    model->setStringList(lines);
}

void MainWindow::on_pushButtonMult_clicked()
{
    int v1, v2, v3;

    v1 = ui->spinBox->value();
    v2 = ui->spinBox_2->value();

    v3 = v1 * v2;

    QString newline = "";
    QStringList lines = model->stringList();
    lines << QStringLiteral("%1 * %2 = %3").arg(v1).arg(v2).arg(v3);
    //lines << QString::number(v3);

    model->setStringList(lines);
}

void MainWindow::on_pushButtonDiv_clicked()
{
    int v1, v2;
    float v3;

    v1 = ui->spinBox->value();
    v2 = ui->spinBox_2->value();

    v3 = v1 / v2;
    //v3 = round(v3);

    QString newline = "";
    QStringList lines = model->stringList();
    lines << QStringLiteral("%1 / %2 = %3").arg(v1).arg(v2).arg(v3);
    //lines << QString::number(v3);

    model->setStringList(lines);
}

void MainWindow::on_pushButtoCLS_clicked()
{
    QStringList lines;
    lines << "Log of operations";

    model->setStringList(lines);
    ui->listView1->setModel(model);
}
