#include"score.h"
#include<QFont>



score::score(QGraphicsItem *p):QGraphicsTextItem (p){
    s=0;
    setPlainText(QString("Score: ")+QString::number(s));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));

}

void score::increse()
{
    s++;

    setPlainText(QString("Score: ")+QString::number(s));
}

