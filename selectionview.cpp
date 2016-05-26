#include "selectionview.h"

SelectionView::SelectionView(QWidget *parent) :
    QWidget (parent)
{
    file = new QGroupBox("Select your file(s)");
    copyright = new QGroupBox("Select your copyright");
    pb_fileSelection = new QPushButton("Sélectionner le(s) fichier(s)");
    pb_copyrightFileSelector = new QPushButton("Séléctionner le ficher");
    pb_createCopyright = new QPushButton("+");
    combo_copyrightSelector = new QComboBox();
    img_file = new LabelDrag(this);
    img_copyright = new LabelDrag(this);
    pb_setCopyright = new QPushButton("Créer copyright");
    pb_applyCopyright = new QPushButton("Appliquer copyright");

    QPixmap pixmap_file(":/icons/AddFiles");
    this->img_file->setPixmap(pixmap_file);
    QPixmap pixmap_copyright(":/icons/Copyright");
    this-> img_copyright->setPixmap(pixmap_copyright);


    QSizePolicy size_file(QSizePolicy::Expanding, QSizePolicy::Expanding);
    size_file.setVerticalStretch(60);
    this->img_file->setSizePolicy(size_file);
    this->img_file->setAlignment(Qt::AlignHCenter);

    QSizePolicy size_Img(QSizePolicy::Expanding, QSizePolicy::Expanding);
    size_Img.setVerticalStretch(60);
    this->img_copyright->setSizePolicy(size_Img);
    this->img_copyright->setAlignment(Qt::AlignHCenter);

    this->img_file->setAcceptDrops(true);
   this-> img_copyright->setAcceptDrops(true);

    QObject::connect(img_file, SIGNAL(dropEvtUrl(QUrl)), this, SLOT(dragFile(QUrl)));
    QObject::connect(img_copyright, SIGNAL(dropEvtUrl(QUrl)), this, SLOT(dragCopy(QUrl)));

    QVBoxLayout *lay_file = new QVBoxLayout(file);
    lay_file->setAlignment(Qt::AlignHCenter);
    lay_file->addWidget(img_file);
    lay_file->addItem(new QSpacerItem(25, 33, QSizePolicy::Fixed, QSizePolicy::Expanding));
    lay_file->addWidget(pb_fileSelection);
    lay_file->addItem(new QSpacerItem(25, 33, QSizePolicy::Fixed, QSizePolicy::Expanding));
    file->setLayout(lay_file);

    QVBoxLayout *lay_copyright = new QVBoxLayout(copyright);
    lay_copyright->setAlignment(Qt::AlignHCenter);
    lay_copyright->addWidget(img_copyright);
    lay_copyright->addWidget(pb_copyrightFileSelector);
    lay_copyright->addWidget(combo_copyrightSelector);
    lay_copyright->addWidget(pb_createCopyright);
    copyright->setLayout(lay_copyright);

    QGridLayout *lay_main = new QGridLayout(this);
    lay_main->addWidget(file, 0, 0);
    lay_main->addWidget(copyright, 0, 1);
    lay_main->addWidget(pb_setCopyright, 1, 0, 1, 2);
    lay_main->addWidget(pb_applyCopyright, 2, 0, 1, 2);
    this->setLayout(lay_main);
}

void SelectionView::dragFile(QUrl url)
{
    url_file = &url;
}

void SelectionView::dragCopy(QUrl url)
{
    url_copy = &url;
}
