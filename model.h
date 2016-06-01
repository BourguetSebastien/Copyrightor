#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QUrl>

class Model
{
public:
    Model();
    QUrl getCopyright() const;
    void setCopyright(const QUrl &value);
    QList<QUrl> getFiles() const;
    void setFiles(const QList<QUrl> &value);

private:
    // List settings
    QList<QUrl> files;
    QUrl copyright;
};

#endif // MODEL_H
