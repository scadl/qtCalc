#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <qstringlist.h>
#include <qstringlistmodel.h>
#include <qabstractitemview.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAdd_clicked();

    void on_actionAction1_triggered();

    void on_pushButtonSubstr_clicked();

    void on_pushButtonMult_clicked();

    void on_pushButtonDiv_clicked();

    void on_pushButtoCLS_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
};

#endif // MAINWINDOW_H
