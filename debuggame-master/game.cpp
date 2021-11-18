#include <QApplication>
#include<QGraphicsScene>
#include"myrect.h"
#include<QGraphicsView>
#include"player.h"
#include<QTimer>
#include"score.h"
#include"game.h"
#include<QBrush>
#include<QImage>

  game::game(QWidget *p)
{
    QGraphicsScene * scene= new QGraphicsScene();

   QGraphicsView * view=new QGraphicsView(scene);
     view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     view->show();
     view->setFixedSize(600,700);
     scene->setSceneRect(0,0,600,700);
     scene->setBackgroundBrush(QBrush(QImage(":/D:/physics/bk.jpg")));




    myrect * rect=new myrect();
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    scene->addItem(rect);
    QPixmap pix(":/D:/physics/player.png");
    int w=100;
    int l=100;
    rect->setPixmap(QPixmap(pix.scaled(w,l)));
     rect->setPos(250,600);

    s=new score();
    scene->addItem(s);


    h=new health();
    h->setPos(h->x(),h->y()+20);
    scene->addItem(h);


     QTimer *time= new QTimer();
     QObject :: connect(time,SIGNAL(timeout()),rect,SLOT(spawn()));
     time->start(2000);
     show();
  }
