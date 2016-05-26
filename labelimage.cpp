#include "labelimage.h"
//#include <QDebug>

LabelImage::LabelImage(QWidget *parent) :
    QLabel(parent)
{
    this->setMinimumSize(1,1);
}

void LabelImage::setPixmap ( const QPixmap & p)
{
    pix = p;
    QLabel::setPixmap(p);
}

void LabelImage::setIcon ( const QIcon & i)
{
    icon = i;
}

void LabelImage::setIcon ( const QIcon & i, const QSize & s)
{
    icon = i;
    QLabel::setPixmap(icon.pixmap(s, QIcon::Normal, QIcon::On));
}

int LabelImage::heightForWidth( int width ) const
{
    return ((qreal)pix.height()*width)/pix.width();
}

QSize LabelImage::sizeHint() const
{
    int w = this->width();
    return QSize( w, heightForWidth(w) );
}

void LabelImage::resizeEvent(QResizeEvent * e)
{
    if(!pix.isNull())
        QLabel::setPixmap(icon.pixmap(this->size(), QIcon::Normal, QIcon::On));
}

void LabelImage::toString()
{
    std::cout << "icon " << std::boolalpha << this->icon.isNull() << std::endl;
}
