#include"player.h"
#include<QKeyEvent>



void player::KeyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Right){
        setPos(x()+10,y());
    }

   else if(event->key()==Qt::Key_Left){
        setPos(x()-10,y());
    }
}
