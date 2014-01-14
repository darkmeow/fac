/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_welcome;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_right;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_card;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_left;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_opt;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_del;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_N3;
    QLabel *label_estado;
    QWidget *widget_face;
    QGroupBox *groupBox;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_num;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num3;
    QPushButton *pushButtonNum0;
    QPushButton *pushButton_numN2;
    QPushButton *pushButton_numN1;
    QPushButton *pushButton_num1;
    QLabel *label_password;
    QLabel *label_hint;
    QLabel *label_cardInsert;
    QLabel *label_panelCajero;
    QLabel *label_video;
    QLabel *label_badPassword;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(722, 866);
        MainWindow->setMinimumSize(QSize(0, 42));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_welcome = new QLabel(centralWidget);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(90, 0, 541, 321));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(false);
        label_welcome->setFont(font);
        label_welcome->setAutoFillBackground(false);
        label_welcome->setLocale(QLocale(QLocale::English, QLocale::Philippines));
        label_welcome->setFrameShadow(QFrame::Sunken);
        label_welcome->setTextFormat(Qt::AutoText);
        label_welcome->setPixmap(QPixmap(QString::fromUtf8(":/imag/welcome.png")));
        label_welcome->setScaledContents(true);
        label_welcome->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(650, 0, 96, 321));
        verticalLayout_right = new QVBoxLayout(layoutWidget);
        verticalLayout_right->setSpacing(6);
        verticalLayout_right->setContentsMargins(11, 11, 11, 11);
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        verticalLayout_right->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imag/button2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(48, 48));
        pushButton_5->setAutoRepeat(false);
        pushButton_5->setAutoExclusive(false);
        pushButton_5->setAutoDefault(false);
        pushButton_5->setDefault(false);
        pushButton_5->setFlat(true);

        verticalLayout_right->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(48, 48));
        pushButton_6->setAutoRepeat(false);
        pushButton_6->setAutoExclusive(false);
        pushButton_6->setAutoDefault(false);
        pushButton_6->setDefault(false);
        pushButton_6->setFlat(true);

        verticalLayout_right->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(48, 48));
        pushButton_7->setAutoRepeat(false);
        pushButton_7->setAutoExclusive(false);
        pushButton_7->setAutoDefault(false);
        pushButton_7->setDefault(false);
        pushButton_7->setFlat(true);

        verticalLayout_right->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(48, 48));
        pushButton_8->setAutoRepeat(false);
        pushButton_8->setAutoExclusive(false);
        pushButton_8->setAutoDefault(false);
        pushButton_8->setDefault(false);
        pushButton_8->setFlat(true);

        verticalLayout_right->addWidget(pushButton_8);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 320, 721, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(70, 0, 20, 321));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(630, 0, 20, 321));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 330, 721, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_card = new QPushButton(centralWidget);
        pushButton_card->setObjectName(QStringLiteral("pushButton_card"));
        pushButton_card->setGeometry(QRect(570, 590, 96, 96));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imag/card1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_card->setIcon(icon1);
        pushButton_card->setIconSize(QSize(64, 64));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 96, 321));
        verticalLayout_left = new QVBoxLayout(layoutWidget1);
        verticalLayout_left->setSpacing(6);
        verticalLayout_left->setContentsMargins(11, 11, 11, 11);
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        verticalLayout_left->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(layoutWidget1);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setIcon(icon);
        pushButton_1->setIconSize(QSize(48, 48));
        pushButton_1->setAutoRepeat(false);
        pushButton_1->setAutoExclusive(false);
        pushButton_1->setAutoDefault(false);
        pushButton_1->setDefault(false);
        pushButton_1->setFlat(true);

        verticalLayout_left->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(48, 48));
        pushButton_2->setAutoRepeat(false);
        pushButton_2->setAutoExclusive(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setDefault(false);
        pushButton_2->setFlat(true);

        verticalLayout_left->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(48, 48));
        pushButton_3->setAutoRepeat(false);
        pushButton_3->setAutoExclusive(false);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setDefault(false);
        pushButton_3->setFlat(true);

        verticalLayout_left->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(48, 48));
        pushButton_4->setAutoRepeat(false);
        pushButton_4->setAutoExclusive(false);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setDefault(false);
        pushButton_4->setFlat(true);

        verticalLayout_left->addWidget(pushButton_4);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(570, 360, 91, 171));
        verticalLayout_opt = new QVBoxLayout(layoutWidget2);
        verticalLayout_opt->setSpacing(0);
        verticalLayout_opt->setContentsMargins(11, 11, 11, 11);
        verticalLayout_opt->setObjectName(QStringLiteral("verticalLayout_opt"));
        verticalLayout_opt->setContentsMargins(0, 0, 0, 0);
        pushButton_ok = new QPushButton(layoutWidget2);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setMinimumSize(QSize(0, 42));
        pushButton_ok->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imag/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ok->setIcon(icon2);
        pushButton_ok->setIconSize(QSize(32, 32));
        pushButton_ok->setFlat(false);

        verticalLayout_opt->addWidget(pushButton_ok);

        pushButton_del = new QPushButton(layoutWidget2);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imag/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_del->setIcon(icon3);
        pushButton_del->setIconSize(QSize(32, 32));
        pushButton_del->setFlat(false);

        verticalLayout_opt->addWidget(pushButton_del);

        pushButton_cancel = new QPushButton(layoutWidget2);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imag/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon4);
        pushButton_cancel->setIconSize(QSize(32, 32));
        pushButton_cancel->setFlat(false);

        verticalLayout_opt->addWidget(pushButton_cancel);

        pushButton_N3 = new QPushButton(layoutWidget2);
        pushButton_N3->setObjectName(QStringLiteral("pushButton_N3"));
        pushButton_N3->setMinimumSize(QSize(0, 42));
        pushButton_N3->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        pushButton_N3->setIconSize(QSize(38, 38));
        pushButton_N3->setFlat(false);

        verticalLayout_opt->addWidget(pushButton_N3);

        label_estado = new QLabel(centralWidget);
        label_estado->setObjectName(QStringLiteral("label_estado"));
        label_estado->setGeometry(QRect(10, 610, 551, 41));
        QFont font1;
        font1.setPointSize(10);
        label_estado->setFont(font1);
        widget_face = new QWidget(centralWidget);
        widget_face->setObjectName(QStringLiteral("widget_face"));
        widget_face->setGeometry(QRect(90, 0, 541, 321));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(300, 360, 241, 171));
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 211, 171));
        gridLayout_num = new QGridLayout(layoutWidget3);
        gridLayout_num->setSpacing(0);
        gridLayout_num->setContentsMargins(11, 11, 11, 11);
        gridLayout_num->setObjectName(QStringLiteral("gridLayout_num"));
        gridLayout_num->setContentsMargins(0, 0, 0, 0);
        pushButton_num2 = new QPushButton(layoutWidget3);
        pushButton_num2->setObjectName(QStringLiteral("pushButton_num2"));
        pushButton_num2->setMaximumSize(QSize(78, 16777215));
        pushButton_num2->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imag/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num2->setIcon(icon5);
        pushButton_num2->setIconSize(QSize(32, 32));
        pushButton_num2->setFlat(false);

        gridLayout_num->addWidget(pushButton_num2, 0, 1, 1, 1);

        pushButton_num4 = new QPushButton(layoutWidget3);
        pushButton_num4->setObjectName(QStringLiteral("pushButton_num4"));
        pushButton_num4->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imag/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num4->setIcon(icon6);
        pushButton_num4->setIconSize(QSize(32, 32));
        pushButton_num4->setFlat(false);

        gridLayout_num->addWidget(pushButton_num4, 1, 0, 1, 1);

        pushButton_num6 = new QPushButton(layoutWidget3);
        pushButton_num6->setObjectName(QStringLiteral("pushButton_num6"));
        pushButton_num6->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imag/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num6->setIcon(icon7);
        pushButton_num6->setIconSize(QSize(32, 32));
        pushButton_num6->setFlat(false);

        gridLayout_num->addWidget(pushButton_num6, 1, 2, 1, 1);

        pushButton_num8 = new QPushButton(layoutWidget3);
        pushButton_num8->setObjectName(QStringLiteral("pushButton_num8"));
        pushButton_num8->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/imag/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num8->setIcon(icon8);
        pushButton_num8->setIconSize(QSize(32, 32));
        pushButton_num8->setFlat(false);

        gridLayout_num->addWidget(pushButton_num8, 2, 1, 1, 1);

        pushButton_num9 = new QPushButton(layoutWidget3);
        pushButton_num9->setObjectName(QStringLiteral("pushButton_num9"));
        pushButton_num9->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/imag/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num9->setIcon(icon9);
        pushButton_num9->setIconSize(QSize(32, 32));
        pushButton_num9->setFlat(false);

        gridLayout_num->addWidget(pushButton_num9, 2, 2, 1, 1);

        pushButton_num7 = new QPushButton(layoutWidget3);
        pushButton_num7->setObjectName(QStringLiteral("pushButton_num7"));
        pushButton_num7->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/imag/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num7->setIcon(icon10);
        pushButton_num7->setIconSize(QSize(32, 32));
        pushButton_num7->setFlat(false);

        gridLayout_num->addWidget(pushButton_num7, 2, 0, 1, 1);

        pushButton_num5 = new QPushButton(layoutWidget3);
        pushButton_num5->setObjectName(QStringLiteral("pushButton_num5"));
        pushButton_num5->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/imag/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num5->setIcon(icon11);
        pushButton_num5->setIconSize(QSize(32, 32));
        pushButton_num5->setFlat(false);

        gridLayout_num->addWidget(pushButton_num5, 1, 1, 1, 1);

        pushButton_num3 = new QPushButton(layoutWidget3);
        pushButton_num3->setObjectName(QStringLiteral("pushButton_num3"));
        pushButton_num3->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/imag/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num3->setIcon(icon12);
        pushButton_num3->setIconSize(QSize(32, 32));
        pushButton_num3->setFlat(false);

        gridLayout_num->addWidget(pushButton_num3, 0, 2, 1, 1);

        pushButtonNum0 = new QPushButton(layoutWidget3);
        pushButtonNum0->setObjectName(QStringLiteral("pushButtonNum0"));
        pushButtonNum0->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/imag/0.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNum0->setIcon(icon13);
        pushButtonNum0->setIconSize(QSize(32, 32));
        pushButtonNum0->setFlat(false);

        gridLayout_num->addWidget(pushButtonNum0, 3, 1, 1, 1);

        pushButton_numN2 = new QPushButton(layoutWidget3);
        pushButton_numN2->setObjectName(QStringLiteral("pushButton_numN2"));
        pushButton_numN2->setMinimumSize(QSize(0, 42));
        pushButton_numN2->setMaximumSize(QSize(16777215, 48));
        pushButton_numN2->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        pushButton_numN2->setIconSize(QSize(32, 32));
        pushButton_numN2->setFlat(false);

        gridLayout_num->addWidget(pushButton_numN2, 3, 0, 1, 1);

        pushButton_numN1 = new QPushButton(layoutWidget3);
        pushButton_numN1->setObjectName(QStringLiteral("pushButton_numN1"));
        pushButton_numN1->setMinimumSize(QSize(0, 42));
        pushButton_numN1->setMaximumSize(QSize(16777215, 48));
        pushButton_numN1->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        pushButton_numN1->setIconSize(QSize(32, 32));
        pushButton_numN1->setFlat(false);

        gridLayout_num->addWidget(pushButton_numN1, 3, 2, 1, 1);

        pushButton_num1 = new QPushButton(layoutWidget3);
        pushButton_num1->setObjectName(QStringLiteral("pushButton_num1"));
        pushButton_num1->setMaximumSize(QSize(78, 16777215));
        pushButton_num1->setStyleSheet(QStringLiteral("background-color: rgb(140, 140, 140);"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/imag/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_num1->setIcon(icon14);
        pushButton_num1->setIconSize(QSize(32, 32));
        pushButton_num1->setFlat(false);

        gridLayout_num->addWidget(pushButton_num1, 0, 0, 1, 1);

        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(90, 0, 541, 321));
        label_password->setPixmap(QPixmap(QString::fromUtf8(":/imag/password.png")));
        label_password->setScaledContents(true);
        label_hint = new QLabel(centralWidget);
        label_hint->setObjectName(QStringLiteral("label_hint"));
        label_hint->setGeometry(QRect(10, 670, 521, 81));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_hint->setFont(font2);
        label_cardInsert = new QLabel(centralWidget);
        label_cardInsert->setObjectName(QStringLiteral("label_cardInsert"));
        label_cardInsert->setGeometry(QRect(580, 570, 81, 21));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_cardInsert->setFont(font3);
        label_panelCajero = new QLabel(centralWidget);
        label_panelCajero->setObjectName(QStringLiteral("label_panelCajero"));
        label_panelCajero->setGeometry(QRect(90, 0, 541, 321));
        label_panelCajero->setPixmap(QPixmap(QString::fromUtf8(":/imag/menu_cajero.png")));
        label_panelCajero->setScaledContents(true);
        label_video = new QLabel(centralWidget);
        label_video->setObjectName(QStringLiteral("label_video"));
        label_video->setGeometry(QRect(90, 0, 541, 321));
        label_badPassword = new QLabel(centralWidget);
        label_badPassword->setObjectName(QStringLiteral("label_badPassword"));
        label_badPassword->setGeometry(QRect(90, 0, 541, 321));
        label_badPassword->setPixmap(QPixmap(QString::fromUtf8(":/imag/error_pass.png")));
        label_badPassword->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        label_panelCajero->raise();
        label_estado->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        pushButton_card->raise();
        widget_face->raise();
        groupBox->raise();
        label_password->raise();
        label_hint->raise();
        label_cardInsert->raise();
        label_welcome->raise();
        label_video->raise();
        label_badPassword->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 722, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_welcome->setText(QString());
        pushButton_5->setText(QString());
        pushButton_5->setShortcut(QString());
        pushButton_6->setText(QString());
        pushButton_6->setShortcut(QString());
        pushButton_7->setText(QString());
        pushButton_7->setShortcut(QString());
        pushButton_8->setText(QString());
        pushButton_8->setShortcut(QString());
        pushButton_card->setText(QString());
        pushButton_1->setText(QString());
        pushButton_1->setShortcut(QString());
        pushButton_2->setText(QString());
        pushButton_2->setShortcut(QString());
        pushButton_3->setText(QString());
        pushButton_3->setShortcut(QString());
        pushButton_4->setText(QString());
        pushButton_4->setShortcut(QString());
        pushButton_ok->setText(QString());
        pushButton_del->setText(QString());
        pushButton_cancel->setText(QString());
        pushButton_N3->setText(QString());
        label_estado->setText(QApplication::translate("MainWindow", "INDICADOR DE ESTADO", 0));
        groupBox->setTitle(QString());
        pushButton_num2->setText(QString());
        pushButton_num4->setText(QString());
        pushButton_num6->setText(QString());
        pushButton_num8->setText(QString());
        pushButton_num9->setText(QString());
        pushButton_num7->setText(QString());
        pushButton_num5->setText(QString());
        pushButton_num3->setText(QString());
        pushButtonNum0->setText(QString());
        pushButton_numN2->setText(QString());
        pushButton_numN1->setText(QString());
        pushButton_num1->setText(QString());
        label_password->setText(QString());
        label_hint->setText(QString());
        label_cardInsert->setText(QApplication::translate("MainWindow", "CARD INSERT", 0));
        label_panelCajero->setText(QString());
        label_video->setText(QString());
        label_badPassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
