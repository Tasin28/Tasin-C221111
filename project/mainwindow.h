#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QSqlDatabase>
#include <QDebug>
#include<QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    double n1=2,n2=3,n3=4,result1=0,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_log_sign_clicked();

    void on_sign_clicked();

    void on_pushButton_10_clicked();

    void on_click1_clicked();

    void on_click2_clicked();

    void on_click3_clicked();

    void on_click4_clicked();

    void on_click5_clicked();

    void on_click6_clicked();

    void on_click7_clicked();

    void on_click8_clicked();

    void on_clicik9_clicked();

private:
    Ui::MainWindow *ui;
    QString log_id,log_password,sn_name,sn_id,sn_email,sn_password;
     double a2,b2;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
