#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsItem>

class score: public QGraphicsTextItem{
public:
    score(QGraphicsItem *p=0);
    void increse();
    int getscore();
    int s;
};

#endif // SCORE_H
