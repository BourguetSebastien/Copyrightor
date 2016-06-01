#ifndef CONTROLER_H
#define CONTROLER_H

#include <QList>
#include <QUrl>

#include "model.h"

class Controler
{
public:
    Controler(Model *model);
    Model *getModel() const;
    void setModel(Model *value);
    void applyUrlsFiles(QList<QUrl> urls);
    void applyUrlCopyright(QUrl url);

private:
    Model *model;
};

#endif // CONTROLER_H
