#include "model.h"

Model::Model()
{
    this->dir = "";
    this->copyright = "";
    this->outputDir = "";
}

QString Model::getDir () const
{
    return dir;
}

void Model::setDir (const QString &dir)
{
    this->dir = dir;
}

QStringList Model::getFiles() const
{
    return files;
}
void Model::setFiles(const QStringList &files)
{
    this->files = files;
}

void Model::setFile(const QString &file)
{
    this->files.append(file);
}

QString Model::getCopyright() const
{
    return copyright;
}
void Model::setCopyright(const QString &copyright)
{
    this->copyright = copyright;
}

QString Model::getOutputDir () const
{
    return this->outputDir;
}
void Model::setOutputDir (const QString &outputDir)
{
    this->outputDir = outputDir;
}
