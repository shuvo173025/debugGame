#include"bullet.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"enemy.h"
#include"game.h"


extern  game *g;

bullet::bullet()
{
   QPixmap pix(":/D:/physics/bullet.png");
    int w=15;
    int h=20;
    setPixmap(QPixmap(pix.scaled(w,h)));

    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(20);
}

void bullet::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();

    for(int i=0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(enemy)){
           g->s->increse();
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;

        }
    }
    setPos(x(),y()-10);
    if( pos().y()-6==0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
