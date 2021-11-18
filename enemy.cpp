#include"enemy.h"
#include<QTimer>
#include<QGraphicsScene>
#include<stdlib.h>
#include"game.h"
#include"health.h"
#include<QString>


extern game *g;

enemy::enemy():QObject(),QGraphicsPixmapItem()
{
    int random_number=rand()%500;
    setPos(random_number,0);
    int e=rand()%16;
    {
     if(e==0){
        QPixmap pix(":/D:/physics/c++.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }

    else if(e==1){
       QPixmap pix(":/D:/physics/drupal.png");
       int w=50;
       int h=50;
       setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==2){
        QPixmap pix(":/D:/physics/java.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==3){
        QPixmap pix(":/D:/physics/javascript.jpg");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==4){
        QPixmap pix(":/D:/physics/php.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==5){
        QPixmap pix(":/D:/physics/lua.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==6){
        QPixmap pix(":/D:/physics/ruby.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==7){
        QPixmap pix(":/D:/physics/python.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==8){
        QPixmap pix(":/D:/physics/zebcart.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==9){
        QPixmap pix(":/D:/physics/swift.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==10){
        QPixmap pix(":/D:/physics/swift.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==11){
        QPixmap pix(":/D:/physics/css.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==12){
        QPixmap pix(":/D:/physics/bash.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==13){
        QPixmap pix(":/D:/physics/obj-c.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==14){
        QPixmap pix(":/D:/physics/c1.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
    }
    else if(e==15){
        QPixmap pix(":/D:/physics/csharp.png");
        int w=50;
        int h=50;
        setPixmap(QPixmap(pix.scaled(w,h)));
 }
    }




    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(15);
}

void enemy::move()
{
    setPos(x(),y()+5);
    if(pos().y()>700)
    {
        g->h->decrease();

        scene()->removeItem(this);
        delete this;
    }
    }
