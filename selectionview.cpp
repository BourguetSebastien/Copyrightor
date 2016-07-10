#include "selectionview.h"

SelectionView::SelectionView(Controler *controler, Model *model, QWidget *parent) :
    QWidget (parent)
{
    this->controler = controler;
    this->model = model;

    file = new QGroupBox("Select your file(s)");
    copyright = new QGroupBox("Select your copyright");
    pb_fileSelection = new QPushButton("Sélectionner le(s) fichier(s)");
    pb_copyrightFileSelector = new QPushButton("Séléctionner le ficher");
    combo_copyrightSelector = new QComboBox();
    lab_filesInfo = new QLabel("0 file selected");
    img_file = new LabelDrag(this);
    img_copyright = new LabelDrag(this);
    pb_applyCopyright = new QPushButton("Appliquer copyright");

    this->lab_filesInfo->setAlignment (Qt::AlignCenter);
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
    QObject::connect(pb_copyrightFileSelector, SIGNAL(clicked()), this, SLOT(chooseFile()));
    QObject::connect(pb_fileSelection, SIGNAL(clicked()), this, SLOT(chooseFiles()));
    QObject::connect (pb_applyCopyright, SIGNAL(clicked()), this, SLOT(chooseOutputDir ()));

    QVBoxLayout *lay_file = new QVBoxLayout(file);
    lay_file->setAlignment(Qt::AlignHCenter);
    lay_file->addWidget(img_file);
    lay_file->addWidget (lab_filesInfo);
    lay_file->addWidget(pb_fileSelection);
    //lay_file->addItem(new QSpacerItem(25, 33, QSizePolicy::Fixed, QSizePolicy::Expanding));
    file->setLayout(lay_file);

    QVBoxLayout *lay_copyright = new QVBoxLayout(copyright);
    lay_copyright->setAlignment(Qt::AlignHCenter);
    lay_copyright->addWidget(img_copyright);
    lay_copyright->addWidget(pb_copyrightFileSelector);
    lay_copyright->addWidget(combo_copyrightSelector);
    copyright->setLayout(lay_copyright);

    QGridLayout *lay_main = new QGridLayout(this);
    lay_main->addWidget(file, 0, 0);
    lay_main->addWidget(copyright, 0, 1);
    lay_main->addWidget(pb_applyCopyright, 1, 0, 1, 2);
    this->setLayout(lay_main);
}

void SelectionView::dragFile(QUrl url)
{
    QStringList fileList;

    qDebug() << "Scanning: " << url.toLocalFile ();

    if (QFileInfo(url.toLocalFile ()).isDir ())
    {
        qDebug()<<"Url is a Dir ";
        QDir export_folder(url.toLocalFile ());
        export_folder.setNameFilters( QStringList() << "*.jpg" << "*.jpeg" << "*.png" << "*.gif" );
        fileList = export_folder.entryList();
        this->model->setDir (url.toLocalFile ());
    }
    else
    {
        qDebug()<<"Url is a File";
        fileList.append(url.toLocalFile ());
    }
    for (QUrl u : fileList)
    {
        qDebug()<<"i: "<<u.toString();
    }
    if (fileList.size () == 1)
    {
        this->lab_filesInfo->setText (QString("%1 file selected").arg(fileList.size ()));
    }
    else if (fileList.size () > 1)
    {
        this->lab_filesInfo->setText (QString("%1 files selected").arg(fileList.size ()));
    }
    else
    {
        this->lab_filesInfo->setText ("No file found...");
    }
    this->model->setFiles (fileList);
}

void SelectionView::dragCopy (QUrl url)
{
    model->setCopyright(url.toLocalFile ());
}

void SelectionView::chooseFile ()
{
    QString file = QFileDialog::getOpenFileName (
                this,
                tr("Selectionnez un fichier"),
                QDir::homePath (),
                "Images (*.png *.gif *.jpg *.jpeg) " );
    this->model->setCopyright (file);
}

void SelectionView::chooseFiles ()
{
    QStringList files = QFileDialog::getOpenFileNames (
                this,
                tr("Selectionnez fichier(s)"),
                QDir::homePath (),
                "Images (*.png *.gif *.jpg *.jpeg) ");
    this->lab_filesInfo->setText (QString ("%1 files selected").arg (files.size ()));
    this->model->setFiles (files);
}

void SelectionView::chooseOutputDir ()
{
    QString dir = QFileDialog::getExistingDirectory (
                this,
                tr("Selectionnez un dossier de sortie"),
                QDir::homePath (),
                QFileDialog::ShowDirsOnly);
    this->model->setOutputDir (dir);
}
