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
