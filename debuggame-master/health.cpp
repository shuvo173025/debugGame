#include"health.h"
#include<QFont>
#include"game.h"


extern game *g;



health::health(QGraphicsItem *p):QGraphicsTextItem (p){
    h=5;
    setPlainText(QString("Health: ")+QString::number(h));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

}

void health::decrease()
{
    h --;
     setPlainText(QString("Health: ")+QString::number(h));
}

int health::gethealth()
{
    return h;
}
