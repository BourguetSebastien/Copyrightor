#ifndef CONTROLER_H
#define CONTROLER_H

#include <QList>
#include <QUrl>
#include <QDebug>

#include "model.h"

class Controler
{
public:
    Controler(Model *model);
    Model *getModel() const;
    void setModel(Model *value);

private:
    Model *model;
};

#endif // CONTROLER_H
