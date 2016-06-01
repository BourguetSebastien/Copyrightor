#include "model.h"

Model::Model()
{
    copyright = 0;
}

QUrl Model::getCopyright() const
{
    return copyright;
}
void Model::setCopyright(const QUrl &value)
{
    copyright = value;
}

QList<QUrl> Model::getFiles() const
{
    return files;
}
void Model::setFiles(const QList<QUrl> &value)
{
    files = value;
}
