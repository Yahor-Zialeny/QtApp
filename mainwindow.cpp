#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    r1 = new Rectangle(this);
    r2 = new NewRectangle(this);
    connect(this, &MainWindow::signal, r1, &Rectangle::slot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::check(bool a){
    if(a == false){
        throw false;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    try{
        bool isOk;
        r1->x = ui->lineEdit_2->text().toDouble(&isOk);
        check(isOk);
        r1->y = ui->lineEdit->text().toDouble(&isOk);
        check(isOk);
        QString result = QString::number(r1->Perimeter());
        ui->label_5->setText(result);
        emit signal(r1->Info());
    }
    catch(bool){
        QMessageBox::warning(this, "Ошибка", "Некорректный ввод");
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    try{
        bool isOk;
        r2->x = ui->lineEdit_2->text().toDouble(&isOk);
        check(isOk);
        r2->y = ui->lineEdit->text().toDouble(&isOk);
        check(isOk);
        r2->c = ui->lineEdit_3->text().toDouble(&isOk);
        check(isOk);
        r2->Increase();
        ui->lineEdit_2->setText(QString::number(r2->x));
        ui->lineEdit->setText(QString::number(r2->y));
    }
    catch(bool){
        QMessageBox::warning(this, "Ошибка", "Некорректный ввод");
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit_2->setText(NULL);
    ui->lineEdit->setText(NULL);
    ui->lineEdit_3->setText(NULL);
    ui->label_5->setText("0");
}

void MainWindow::keyPressEvent(QKeyEvent *e){
    if(e->key() == Qt::Key_Return){
        on_pushButton_2_clicked();
    }
    if(e->key() == Qt::Key_Escape){
        qApp->quit();
    }
}

