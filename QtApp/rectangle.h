#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QObject>
#include <QDebug>


class Rectangle : public QObject
{
    Q_OBJECT
    friend class MainWindow;
protected:
    double x,y;
    Rectangle(QObject *parent = nullptr);
    double Perimeter();
    QString Info();
    ~Rectangle();
signals:

public slots:
    void slot(QString);
};

class NewRectangle : public Rectangle {
    friend class MainWindow;
    double c;
    NewRectangle(QObject *ptr = nullptr);
    void Increase();
    ~NewRectangle();
};

#endif // RECTANGLE_H
