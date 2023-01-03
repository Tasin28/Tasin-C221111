#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("G:/chill.db");
    db.open();
    qDebug()<<db.isOpen();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_login_clicked()
{
    log_id=ui->login_id->text();
     log_password=ui->login_password->text();
     QSqlQuery query;
     query.exec("SELECT *FROM inform WHERE id='"+log_id+"' AND password='"+ log_password+"'");
     if(query.next())
     {
         ui->stackedWidget->setCurrentIndex(2);
         ui->pro_name->setText(query.value(0).toString());
          ui->pro_id->setText(query.value(1).toString());
             ui->pro_email->setText(query.value(2).toString());
                query.exec("SELECT *FROM user WHERE id='"+log_id+"' AND password='"+ log_password+"'");
                if(query.next())
                {
                    ui->label_result->setIndent(query.value(2).toInt());
                    result1=(query.value(2).toInt());
                    a1=(query.value(3).toInt());
                    if(a1==1)
                    {
                           ui->click1->setText("compelet");
                    }
                     b1=(query.value(4).toInt());
                     if(b1==1)
                     {
                            ui->click2->setText("compelet");
                     }
                     c1=(query.value(5).toInt());
                     if(c1==1)
                     {
                            ui->click3->setText("compelet");
                     }
                     d1=(query.value(6).toInt());
                     if(d1==1)
                     {
                            ui->click4->setText("compelet");
                     }
                    e1=(query.value(7).toInt());
                    if(e1==1)
                    {
                           ui->click5->setText("compelet");
                    }
                 f1=(query.value(8).toInt());
                 if(f1==1)
                 {
                        ui->click6->setText("compelet");
                 }
                   g1=(query.value(9).toInt());
                   if(g1==1)
                   {
                          ui->click7->setText("compelet");
                   }
                h1=(query.value(10).toInt());
                if(h1==1)
                {
                       ui->click8->setText("compelet");
                }
              i1=(query.value(11).toInt());
              if(i1==1)
              {
                     ui->clicik9->setText("compelet");
              }

                }


     }
     else
     {
         QMessageBox::warning(this,"login","WRONG ID Password");
     }
     ui->login_id->clear();
     ui->login_password->clear();
}


void MainWindow::on_log_sign_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_sign_clicked()
{
      sn_name=ui->sign_name->text();
    sn_id=ui->sign_id->text();
      sn_email=ui->sign_email->text();
     sn_password=ui->sign_password->text();
     QSqlQuery query;
     query.exec("INSERT INTO inform(name,id,email,password) VALUES ('"+sn_name+"','"+sn_id+"','"+sn_email+"','"+sn_password+"')");
   query.exec("INSERT INTO user(id,password) VALUES ('"+sn_id+"','"+sn_password+"')");
     ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_10_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_click1_clicked()
{

    if(result1<=20 && a1==0)
    {
        result1=result1+n3;
         ui->label_result->setText(QString :: number(result1));
            ui->click1->setText("compelet");
         a1++;
         a2=a1;
             QSqlQuery query;
           query.exec("INSERT INTO user(result,a) VALUES (result1,a1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,a) VALUES (result1,a1)");
    }

}


void MainWindow::on_click2_clicked()
{
    if(result1<=21 && b1==0)
    {
        result1=result1+n2;
         ui->label_result->setText(QString :: number(result1));
            ui->click2->setText("compelet");
         b1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,b) VALUES (result1,b1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,b) VALUES (result1,b1)");
    }

}


void MainWindow::on_click3_clicked()
{
    if(result1<=20 && c1==0)
    {
        result1=result1+n3;
           ui->label_result->setText(QString :: number(result1));
               ui->click3->setText("compelet");
         c1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,c) VALUES (result1,c1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,c) VALUES (result1,c1)");
    }

}


void MainWindow::on_click4_clicked()
{
    if(result1<=22 && d1==0)
    {
        result1=result1+n1;
         ui->label_result->setText(QString :: number(result1));
            ui->click4->setText("compelet");
         d1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,d) VALUES (result1,d1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,d) VALUES (result1,d1)");
    }

}


void MainWindow::on_click5_clicked()
{
    if(result1<=20 && e1==0)
    {
        result1=result1+n3;
         ui->label_result->setText(QString :: number(result1));
            ui->click5->setText("compelet");
         e1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,e) VALUES (result1,e1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,e) VALUES (result1,e1)");
    }

}


void MainWindow::on_click6_clicked()
{
    if(result1<=21 && f1==0)
    {
        result1=result1+n2;
         ui->label_result->setText(QString :: number(result1));
            ui->click6->setText("compelet");
         f1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,f) VALUES (result1,f1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,f) VALUES (result1,f1)");
    }

}


void MainWindow::on_click7_clicked()
{
    if(result1<=20 && g1==0)
    {
        result1=result1+n3;
         ui->label_result->setText(QString :: number(result1));
            ui->click7->setText("compelet");
         g1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,g) VALUES (result1,g1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,g) VALUES (result1,g1)");
    }

}


void MainWindow::on_click8_clicked()
{
    if(result1<=20 && h1==0)
    {
        result1=result1+n3;
         ui->label_result->setText(QString :: number(result1));
            ui->click8->setText("compelet");
         h1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,h) VALUES (result1,h1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,h) VALUES (result1,h1)");
    }

}


void MainWindow::on_clicik9_clicked()
{
    if(result1<=21 && i1==0)
    {
        result1=result1+n2;
         ui->label_result->setText(QString :: number(result1));
            ui->clicik9->setText("compelet");
         i1++;
         QSqlQuery query;
       query.exec("INSERT INTO user(result,i) VALUES (result1,i1)");

    }
    else
    {
        QSqlQuery query;
      query.exec("INSERT INTO user(result,i) VALUES (result1,i1)");
    }

}

