#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QString>
#include <QStringList>

class Model
{
public:
    Model();
    QString getDir() const;
    void setDir(const QString &dir);
    QStringList getFiles() const;
    void setFiles(const QStringList &files);
    void setFile(const QString &file);
    QString getCopyright() const;
    void setCopyright(const QString &copyright);
    QString getOutputDir() const;
    void setOutputDir(const QString &outputDir);

private:
    // List settings
    QString dir;
    QStringList files;
    QString copyright;
    QString outputDir;
};

#endif // MODEL_H
