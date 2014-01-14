#include <QtWidgets>
#include <QApplication>
#include "mainwindow.h"
#include <QState>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QStateMachine>
#include <QFinalState>
#include <QWidget>




int main(int argc, char *argv[])
{
//    Q_INIT_RESOURCE(states);

    QApplication app(argc, argv);
    MainWindow w;
    w.show();



    return app.exec();
}
