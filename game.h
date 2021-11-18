#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include"myrect.h"
#include"score.h"
#include"health.h"
#include<QGraphicsPixmapItem>


class game:public QGraphicsView{
public:
    game(QWidget *parent=0);
    QGraphicsScene *scene;
    myrect *m;
    score *s;
    health *h;
};
