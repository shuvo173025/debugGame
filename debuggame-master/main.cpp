#include <QApplication>
#include<QGraphicsScene>
#include"myrect.h"
#include<QGraphicsView>
#include"player.h"
#include<QTimer>
#include"score.h"
#include"game.h"


game *g;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  g=new game;
    g->hide();

    return a.exec();
}
