#ifndef EDITIONVIEW_H
#define EDITIONVIEW_H

#include <QWidget>
#include <QGridLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>
#include <QGraphicsPixmapItem>

#include "controler.h"
#include "model.h"

class EditionView : public QWidget
{
    Q_OBJECT
public:
    explicit EditionView(Controler *controler, Model *model, QWidget *parent = 0);

signals:

public slots:

private:
    Controler *controler;
    Model *model;
    QGraphicsView *graph_View;
    QGraphicsScene *graph_Scene;
    QImage *img_copy;
    QGraphicsPixmapItem *img_item;
};

#endif // EDITIONVIEW_H
