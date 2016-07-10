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
#include <QDebug>

#include "labeldrag.h"
#include "controler.h"
#include"model.h"

class SelectionView : public QWidget
{
    Q_OBJECT

public:
    explicit SelectionView(Controler *controler, Model *model, QWidget *parent = 0);

public slots:
    void dragFile(QUrl url);
    void dragCopy(QUrl url);
    void chooseFile();
    void chooseFiles();
    void chooseOutputDir();

private:
    Controler *controler;
    Model *model;
    QGroupBox *file;
    QGroupBox *copyright;
    QPushButton *pb_fileSelection;
    QPushButton *pb_copyrightFileSelector;
    QPushButton *pb_applyCopyright;
    QComboBox *combo_copyrightSelector;
    QLabel *lab_filesInfo;
    LabelDrag *img_file;
    LabelDrag *img_copyright;
};

#endif // SELECTIONVIEW_H
