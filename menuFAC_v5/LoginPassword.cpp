#include "LoginPassword.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "ui_mainwindow.h"

using namespace std;

// clase para verificar passwords
LoginPassword::LoginPassword()
{
    this->passwd = new string();
    this->usuario = -1;
}


void LoginPassword::validate() // busca si existe el password ingresado
{

    std::cout << "Validate()" << std::endl;
    vector<string> passDB;

    passDB.push_back(string("2394")); // pass usuario 0
    passDB.push_back(string("7476")); // pass usuario 1
    passDB.push_back(string("1234")); // pass usuario 2

    int usuarioDetectado = find(passDB.begin(), passDB.end(), *this->passwd) - passDB.begin();
    if (usuarioDetectado > -1 && usuarioDetectado < (int)passDB.size()) { // password valido detectado
        this->usuario = usuarioDetectado;

        cout << "Usuario detectado: " << usuarioDetectado << endl;

        emit validateUser(usuarioDetectado); // empieza a buscar una cara para este usuario
        emit login(); // muestra el video
    } else {
        LoginPassword::clear();
        emit badPassword(); // pantalla de password incorrecto
        cout << "Bad password" << endl;
    }
}

void LoginPassword::showPass()
{
  std::cout << "passwd: " << *this->passwd << std::endl;
}

// slots de las botoneras, cada click agrega un nÃºmero al password
void LoginPassword::press1()
{
    if(this->passwd->size() < 4)
      this->passwd->append("1");

    LoginPassword::showPass();
}

void LoginPassword::press2()
{
    if(this->passwd->size() < 4)
      passwd->append("2");

    LoginPassword::showPass();
}
void LoginPassword::press3()
{
    if(this->passwd->size() < 4)
      passwd->append("3");

    LoginPassword::showPass();
}
void LoginPassword::press4()
{
    if(this->passwd->size() < 4)
      passwd->append("4");

    LoginPassword::showPass();
}
void LoginPassword::press5()
{
    if(this->passwd->size() < 4)
      passwd->append("5");

    LoginPassword::showPass();
}
void LoginPassword::press6()
{
    if(this->passwd->size() < 4)
      passwd->append("6");

    LoginPassword::showPass();
}
void LoginPassword::press7()
{
    if(this->passwd->size() < 4)
      passwd->append("7");

    LoginPassword::showPass();
}
void LoginPassword::press8()
{
    if(this->passwd->size() < 4)
      passwd->append("8");

    LoginPassword::showPass();
}
void LoginPassword::press9()
{
    if(this->passwd->size() < 4)
      passwd->append("9");

    LoginPassword::showPass();
}
void LoginPassword::clear()
{
    passwd->clear();

    LoginPassword::showPass();
}
void LoginPassword::del()
{
    passwd->pop_back();

    LoginPassword::showPass();
}
