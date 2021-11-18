#ifndef MYRECT_H
#define MYRECT_H

#include<QGraphicsPixmapItem>
#include<QGraphicsRectItem>
#include<QKeyEvent>
#include<QObject>


class myrect:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);

public slots:
    void spawn();
};

#endif // MYRECT_H
