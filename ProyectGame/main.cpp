#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //create a scene

    QGraphicsScene *scene = new QGraphicsScene();
    //create a item to put  into the scene

    MyRect *rect = new MyRect();
    rect->setRect(0,0,100,100);


    // add the item to the scene
    scene->addItem(rect);
    //make fosable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    // add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    return a.exec();

}
