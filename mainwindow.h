#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include <QObject>
#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QAction>

#include "selectionview.h"
#include "editionview.h"
#include "controler.h"
#include "model.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Controler *controler = 0, Model *model = 0, QWidget *parent = 0);
    ~MainWindow();

public slots:
    void newFile();
    void open();
    void save();
    void print();
    void undo();
    void redo();
    void cut();
    void copy();
    void paste();
    void about();
    void aboutQt();

private:
    Controler *controler;
    Model *model;
    SelectionView *selectionView;
    EditionView *editionView;

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *recentMenu;
    QMenu *helpMenu;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *printAct;
    QAction *exitAct;
    QAction *undoAct;
    QAction *redoAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

    void createEditionView();
};

#endif // MAINWINDOW_H
