#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include <QObject>
#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QAction>

#include "selectionview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
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
    SelectionView *startView;
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
};

#endif // MAINWINDOW_H
