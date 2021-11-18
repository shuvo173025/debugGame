#ifndef BULLET_H
#define BULLET_H

#include"bullet.h"
#include<QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include<QObject>

class bullet:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
   public:
    bullet();
public slots:
    void move();


};

#endif // BULLET_H
