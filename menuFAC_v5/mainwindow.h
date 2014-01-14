#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QApplication>
#include <QState>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QStateMachine>
#include <QFinalState>
#include <QWidget>

#include "ui_pass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    Ui_Form *faceBox;


public slots:
    void setupStateMachine();



signals:


};

#endif // MAINWINDOW_H
