#ifndef LOGINPASSWORD_H
#define LOGINPASSWORD_H
#include <QtWidgets>
#include <string>
#include "ui_mainwindow.h"

using namespace std;

class LoginPassword : public QObject
{
Q_OBJECT

public:
   LoginPassword();


private:
    Ui::MainWindow *p;
    string *passwd;
    int usuario;
    void showPass();

public slots:

    void validate();
    void press1();
    void press2();
    void press3();
    void press4();
    void press5();
    void press6();
    void press7();
    void press8();
    void press9();
    void clear();
    void del();

signals:
    void login();
    void validateUser(int);
    void badPassword();
};

#endif // LOGINPASSWORD_H
