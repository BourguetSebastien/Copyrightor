#ifndef LABELDRAG_H
#define LABELDRAG_H

#include <iostream>

#include <QObject>
#include <QWidget>
#include <QtWidgets>
#include <QLabel>
#include <QUrl>

class LabelDrag : public QLabel
{
    Q_OBJECT

public:
    LabelDrag(QWidget *parent = 0);
    void setIcon (QPixmap pix);

public slots:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

signals:
    void dropEvtUrl(QUrl url);

private:
    QDrag *drag;
    QMimeData *data;
};

#endif // LABELDRAG_H
