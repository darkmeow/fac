#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LoginPassword.h"
#include "videowindow.h"

#include <QtWidgets>
#include <QApplication>
#include <QState>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QStateMachine>
#include <QFinalState>
#include <QWidget>

#include <iostream>

using namespace std;





MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupStateMachine();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupStateMachine()
{
    //faceBox->setupUi(ui->widget_face); // widget reconocimiento facial

    std::cout << "MainWindow" << std::endl;

    // maquina de estado
    QStateMachine *machine = new QStateMachine(this);
    QState *s1 = new QState();
    QState *s2 = new QState();
    QState *s3 = new QState();
    QState *s4 = new QState();

    LoginPassword *key = new LoginPassword(); // clase para validar passwords

    //--------------------------------------------------------------------
    // estado: 1 Bienvenida

    s1->assignProperty(ui->label_hint , "text", "Presiona el boton insertar tarjeta"); //indica el estado actual
    s1->assignProperty(ui->label_estado, "text", "ESTADO: Bienvenido"); //indica el estado actual
    s1->assignProperty(ui->groupBox, "enabled", "false"); //oculta el teclado

    QObject::connect(s1, SIGNAL(entered()),this->ui->label_welcome, SLOT(show()));
    QObject::connect(s1, SIGNAL(entered()),this->ui->label_password, SLOT(hide()));
    QObject::connect(s1, SIGNAL(entered()),this->ui->label_video, SLOT(hide()));
    QObject::connect(s1, SIGNAL(entered()),this->ui->label_panelCajero, SLOT(hide()));
    QObject::connect(s1, SIGNAL(entered()),this->ui->label_badPassword, SLOT(hide()));

    //--------------------------------------------------------------------
    // estado: 2 Password

    s2->assignProperty(ui->label_hint , "text", "Presiona la clave: boton 1 ");
    s2->assignProperty(ui->label_estado, "text", "ESTADO: Password"); //indica el estado actual
    s2->assignProperty(ui->groupBox, "enabled", "true"); //habilita el teclado

    QObject::connect(s2, SIGNAL(entered()), this->ui->label_welcome, SLOT(hide()));
    QObject::connect(s2, SIGNAL(entered()),this->ui->label_password, SLOT(show()));
    QObject::connect(s2, SIGNAL(entered()), this->ui->label_video, SLOT(hide()));
    QObject::connect(s2, SIGNAL(entered()),this->ui->label_panelCajero, SLOT(hide()));
    QObject::connect(s2, SIGNAL(entered()), this->ui->label_badPassword, SLOT(hide()));
    connect(ui->pushButton_ok, SIGNAL(clicked()), key, SLOT(validate())); // condicional
    connect(ui->pushButton_num1 , SIGNAL(clicked()), key, SLOT(press1()));
    connect(ui->pushButton_num2 , SIGNAL(clicked()), key, SLOT(press2()));
    connect(ui->pushButton_num3 , SIGNAL(clicked()), key, SLOT(press3()));
    connect(ui->pushButton_num4 , SIGNAL(clicked()), key, SLOT(press4()));
    connect(ui->pushButton_num5 , SIGNAL(clicked()), key, SLOT(press5()));
    connect(ui->pushButton_num6 , SIGNAL(clicked()), key, SLOT(press6()));
    connect(ui->pushButton_num7 , SIGNAL(clicked()), key, SLOT(press7()));
    connect(ui->pushButton_num8 , SIGNAL(clicked()), key, SLOT(press8()));
    connect(ui->pushButton_num9 , SIGNAL(clicked()), key, SLOT(press9()));
    connect(ui->pushButton_cancel , SIGNAL(clicked()), key, SLOT(clear()));
    connect(ui->pushButton_del , SIGNAL(clicked()), key, SLOT(del()));

    connect(key, SIGNAL(badPassword()), this->ui->label_badPassword, SLOT(show()));
    connect(key, SIGNAL(badPassword()), this->ui->label_password, SLOT(hide()));




    //--------------------------------------------------------------------
    // estado: 3 Facial

    s3->assignProperty(ui->label_hint , "text", "Presiona el boton superior izquierdo para continuar");
    s3->assignProperty(ui->label_estado, "text", "ESTADO: Reconocimiento facial"); //indica el estado actual
    s3->assignProperty(ui->groupBox, "enabled", "false"); //oculta el teclado

    VideoWindow *video = new VideoWindow(this->ui->label_video);
    QObject::connect(key, SIGNAL(validateUser(int)), video, SLOT(validateFace(int)));
    QObject::connect(s3, SIGNAL(entered()),this->ui->label_welcome, SLOT(hide()));
    QObject::connect(s3, SIGNAL(entered()),this->ui->label_password, SLOT(hide()));
    QObject::connect(s3, SIGNAL(entered()),this->ui->label_video, SLOT(show()));
    QObject::connect(s3, SIGNAL(entered()),this->ui->label_panelCajero, SLOT(hide()));
    QObject::connect(s3, SIGNAL(entered()), this->ui->label_badPassword, SLOT(hide()));


    //--------------------------------------------------------------------
    // estado: 4 Menu cajero

    s4->assignProperty(ui->label_hint , "text", "Presiona el boton superior izquierdo para volver al inicio");
    s4->assignProperty(ui->label_estado, "text", "ESTADO: Menu cajero"); //indica el estado actual
    s4->assignProperty(ui->groupBox, "enabled", "false"); //oculta el teclado

    QObject::connect(s4, SIGNAL(entered()),this->ui->label_welcome, SLOT(hide()));
    QObject::connect(s4, SIGNAL(entered()),this->ui->label_password, SLOT(hide()));
    QObject::connect(s4, SIGNAL(entered()),this->ui->label_video, SLOT(hide()));
    QObject::connect(s4, SIGNAL(entered()),this->ui->label_panelCajero, SLOT(show()));
    QObject::connect(s4, SIGNAL(entered()), this->ui->label_badPassword, SLOT(hide()));

    //--------------------------------------------------------------------
    // Transiciones

    s1->addTransition(this->ui->pushButton_card, SIGNAL(clicked()), s2);
    s2->addTransition(key, SIGNAL(login()), s3); // entra al estado s3
    s3->addTransition(video, SIGNAL(validUser()), s4);
    s4->addTransition(this->ui->pushButton_1 , SIGNAL(clicked()), s1);

    machine->addState(s1);
    machine->addState(s2);
    machine->addState(s3);
    machine->addState(s4);
    machine->setInitialState(s1);
    machine->start();

}
