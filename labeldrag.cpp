#include "labeldrag.h"

LabelDrag::LabelDrag(QWidget *parent) :
    QLabel(parent)
{
    QDrag *drag = new QDrag(this);
    QMimeData *data = new QMimeData;

    drag->setMimeData(data);

    setAcceptDrops(true);
}

void LabelDrag::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("text/uri-list"))
    {
        event->acceptProposedAction();
    }
}

void LabelDrag::dropEvent(QDropEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        foreach (QUrl url, event->mimeData()->urls()) {
            std::cout << url.toString().toStdString() << std::endl;
            emit dropEvtUrl(url);
        }
    }
}
