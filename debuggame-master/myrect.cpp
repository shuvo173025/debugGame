#include"myrect.h"
#include"bullet.h"
#include<QGraphicsScene>
#include"enemy.h"



void myrect::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left){
        if(pos().x()>0){
        setPos(x()-30,y());
        }
    }
    else if(event->key()==Qt::Key_Right){
        if(pos().x()+100<600){
        setPos(x()+30,y());
        }
    }
   else if(event->key()==Qt::Key_Space){

        bullet *bull = new bullet();
        bull->setPos(x()+45,y());
        scene()->addItem(bull);
    }
}

void myrect::spawn()
{
    enemy *ene=new enemy();
    scene()->addItem(ene);
}
