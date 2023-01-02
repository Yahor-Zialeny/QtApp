#include "rectangle.h"

Rectangle::Rectangle(QObject *parent)
    : QObject{parent}
{
}

Rectangle::~Rectangle() {
}

NewRectangle::NewRectangle(QObject *ptr):Rectangle(ptr){
}

void NewRectangle:: Increase(){
    x += c;
    y += c;
}

NewRectangle::~NewRectangle(){
}

double Rectangle::Perimeter() {
    return 2 * fabs(x) + 2 * fabs(y);
}

QString Rectangle::Info(){
    QString a = QString::number(x);
    QString b = QString::number(y);
    QString c = QString::number(Perimeter());
    QString Info = "Координата Ox: " + a + ". " + " Координата Oy: " + b + ". " + " Периметр прямоугольника: " + c;
    return Info;
}

void Rectangle::slot(QString a){
    qDebug() << a;
}
