#ifndef HEALTH_H
#define HEALTH_H


#include<QGraphicsItem>

class health: public QGraphicsTextItem{
public:
    health(QGraphicsItem *p=0);
    void decrease();
    int gethealth();
    int h;
};

#endif // HEALTH_H
