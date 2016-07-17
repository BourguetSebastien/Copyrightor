#include "editionview.h"

EditionView::EditionView(Controler *controler, Model *model, QWidget *parent) : QWidget(parent)
{
    this->controler = controler;
    this->model = model;

    this->graph_Scene = new QGraphicsScene (this);
    this->graph_View = new QGraphicsView (this->graph_Scene, this);

    this->img_item = new QGraphicsPixmapItem ();

    if (this->model->getFiles ().size () == 0) {
        this->img_copy = new QImage (":/src/copy");
        this->img_copy->scaled (200, 200, Qt::AspectRatioMode::KeepAspectRatio, Qt::TransformationMode::SmoothTransformation);
        this->graph_View->setBackgroundBrush (QBrush (QPixmap (
                                                          ":/src/img_1").scaled (
                                                          900, 600, Qt::AspectRatioMode::KeepAspectRatio, Qt::TransformationMode::SmoothTransformation )));
    }
    else
    {
        this->img_copy = new QImage (model->getCopyright ());
        this->img_copy->scaled (200, 200, Qt::AspectRatioMode::KeepAspectRatio, Qt::TransformationMode::SmoothTransformation);
        this->graph_View->setBackgroundBrush (QBrush (QPixmap (
                                                          model->getDir () + this->model->getFiles ().first ()).scaled (
                                                          900, 600, Qt::AspectRatioMode::KeepAspectRatio, Qt::TransformationMode::SmoothTransformation )));
    }

    this->img_item->setPixmap (QPixmap::fromImage (*(this->img_copy), Qt::ImageConversionFlag::AutoColor));
    this->graph_Scene->addItem (this->img_item);

    this->graph_View->setViewportUpdateMode (QGraphicsView::ViewportUpdateMode::SmartViewportUpdate);

    QGridLayout *lay = new QGridLayout(this);
    lay->addWidget(this->graph_View, 0, 0);
    this->setLayout(lay);
}
