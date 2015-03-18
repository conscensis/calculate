#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui-> pushButton, SIGNAL(clicked()),this,SLOT(MyEventHandler()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    n=ui->lineEdit->text();

    switch(a)
       {
    case 1:
      h=QString::number(s.toDouble()*n.toDouble());
      ui->lineEdit->setText(QString::number(s.toDouble()*n.toDouble()));
      ui->label->setText(ui->label->text()+n+"\n------- \n"+h);
    break;

    case 2:
        if(n.toDouble()!=0)
        {
            h=QString::number(s.toDouble()/n.toDouble());
      ui->lineEdit->setText(QString::number(s.toDouble()/n.toDouble()));
      ui->label->setText(ui->label->text()+n+"\n------- \n"+h);
        }
        else
        {
         ui->lineEdit->setText("ERROR, devide by zero");
        }
     break;

    case 3:
        h=QString::number(s.toDouble()+n.toDouble());
      ui->lineEdit->setText(QString::number(s.toDouble()+n.toDouble()));
      ui->label->setText(ui->label->text()+n+"\n------- \n"+h);
     break;

    case 4:
        h=QString::number(s.toDouble()-n.toDouble());
      ui->lineEdit->setText(QString::number(s.toDouble()-n.toDouble()));
      ui->label->setText(ui->label->text()+n+"\n------- \n"+h);
     break;

    case 5:
        double q,p,m;
        q=s.toDouble();
        p=n.toDouble();
        m=q;
        for(double i=1;i<p;i++)
        {
         q*=m;
        }
        h=QString::number(q);
      ui->lineEdit->setText(QString::number(q));
      ui->label->setText(QString::number(p)+"="+ui->label->text()+(QString::number(q)));
     break;
    }
    //s=ui->lineEdit->text();
    //ui->lineEdit->setText(ui->lineEdit->text()+"1");
    //ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_2_clicked()
{
    a=1; //умножить
    s=ui->lineEdit->text();
    ui->lineEdit->clear();
    ui->label->setText(s+"\n *  \n");
}

void MainWindow::on_pushButton_3_clicked()
{
    a=2; //делить
    s=ui->lineEdit->text();
    ui->lineEdit->clear();
    ui->label->setText(s+"\n \  \n");

}

void MainWindow::on_pushButton_4_clicked()
{
   a=3; //плюс
   s=ui->lineEdit->text();
   ui->lineEdit->clear();
   ui->label->setText(s+"\n +  \n");
}

void MainWindow::on_pushButton_5_clicked()
{
    a=4; //минус
    s=ui->lineEdit->text();
    ui->lineEdit->clear();
    ui->label->setText(s+"\n -  \n");
}

void MainWindow::on_pushButton_6_clicked()
{
    double x;
   s=ui->lineEdit->text();
   //sqrt(s.toDouble();).toString();
   x = s.toDouble();
   x = sqrt(x);


   ui->lineEdit->setText(QString::number(x));
   ui->label->setText("sqrt of "+s+"="+QString::number(x));
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->label->clear();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_8_clicked()
{
    double x;
   s=ui->lineEdit->text();
   //sqrt(s.toDouble();).toString();
   x = s.toDouble();
   x = x*x;


   ui->lineEdit->setText(QString::number(x));
   ui->label->setText(s+"^2 = "+QString::number(x));

}

void MainWindow::on_pushButton_9_clicked()
{

    a=5; //стемень n
    s=ui->lineEdit->text();
    ui->lineEdit->clear();
    ui->label->setText(s+"^  ");

}
