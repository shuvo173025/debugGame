#ifndef ENEMY_H
#define ENEMY_H


#include"enemy.h"
#include<QGraphicsRectItem>
#include<QObject>
#include<QGraphicsPixmapItem>

class enemy:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
   public:
    enemy();
public slots:
    void move();


};


#endif // ENEMY_H
