#ifndef SELECTIONVIEW_H
#define SELECTIONVIEW_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QGroupBox>
#include <QGridLayout>
#include <QLabel>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QUrl>

#include "labeldrag.h"

class SelectionView : public QWidget
{
    Q_OBJECT

public:
    explicit SelectionView(QWidget *parent = 0);

public slots:
    void dragFile(QUrl url);
    void dragCopy(QUrl url);

private:
    QGroupBox *file;
    QGroupBox *copyright;
    QPushButton *pb_fileSelection;
    QPushButton *pb_copyrightFileSelector;
    QPushButton *pb_createCopyright;
    QPushButton *pb_setCopyright;
    QPushButton *pb_applyCopyright;
    QComboBox *combo_copyrightSelector;
    LabelDrag *img_file;
    LabelDrag *img_copyright;
    QUrl *url_file;
    QUrl *url_copy;
};

#endif // SELECTIONVIEW_H
