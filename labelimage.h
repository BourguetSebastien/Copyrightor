#ifndef LABELIMAGE_H
#define LABELIMAGE_H

#include <iostream>

#include <QLabel>
#include <QPixmap>
#include <QIcon>
#include <QResizeEvent>

class LabelImage : public QLabel
{
    Q_OBJECT

public:
    explicit LabelImage(QWidget *parent = 0);
    virtual int heightForWidth( int width ) const;
    virtual QSize sizeHint() const;

signals:

public slots:
    void setPixmap ( const QPixmap & );
    void setIcon ( const QIcon & i);
    void setIcon ( const QIcon & i, const QSize & s);
    void resizeEvent(QResizeEvent *);
    void toString();

private:
    QPixmap pix;
    QIcon icon;
};


#endif // LABELIMAGE_H
