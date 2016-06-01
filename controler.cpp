#include "controler.h"

Controler::Controler(Model *model)
{
    this->model = model;
}

Model *Controler::getModel() const
{
    return model;
}
void Controler::setModel(Model *value)
{
    model = value;
}

void Controler::applyUrlsFiles(QList<QUrl> urls)
{
    this->model->setFiles(urls);
}

void Controler::applyUrlCopyright(QUrl url)
{
    this->model->setCopyright(url);
}
