/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *MainName;
    QLabel *Info;
    QLabel *A;
    QLabel *B;
    QLabel *C;
    QPushButton *Complete;
    QLineEdit *LineEditA;
    QLineEdit *LineEditB;
    QLineEdit *LineEditC;
    QLabel *Discr;
    QLabel *label;
    QTextEdit *TextEditD;
    QTextEdit *TextEditKoren;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(947, 546);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(4, 240, 71, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(109, 255, 151, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(56, 247, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(2, 120, 35, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(2, 160, 47, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(129, 247, 163, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainName = new QLabel(centralWidget);
        MainName->setObjectName(QString::fromUtf8("MainName"));
        MainName->setGeometry(QRect(290, 10, 381, 71));
        QFont font;
        font.setPointSize(18);
        MainName->setFont(font);
        Info = new QLabel(centralWidget);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setGeometry(QRect(30, 60, 901, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        Info->setFont(font1);
        A = new QLabel(centralWidget);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(20, 190, 31, 16));
        QFont font2;
        font2.setPointSize(14);
        A->setFont(font2);
        B = new QLabel(centralWidget);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(20, 270, 31, 16));
        B->setFont(font2);
        C = new QLabel(centralWidget);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(20, 350, 31, 16));
        C->setFont(font2);
        Complete = new QPushButton(centralWidget);
        Complete->setObjectName(QString::fromUtf8("Complete"));
        Complete->setGeometry(QRect(220, 180, 101, 41));
        QFont font3;
        font3.setPointSize(12);
        Complete->setFont(font3);
        LineEditA = new QLineEdit(centralWidget);
        LineEditA->setObjectName(QString::fromUtf8("LineEditA"));
        LineEditA->setGeometry(QRect(60, 180, 113, 41));
        LineEditA->setFont(font2);
        LineEditB = new QLineEdit(centralWidget);
        LineEditB->setObjectName(QString::fromUtf8("LineEditB"));
        LineEditB->setGeometry(QRect(60, 260, 113, 41));
        LineEditB->setFont(font2);
        LineEditC = new QLineEdit(centralWidget);
        LineEditC->setObjectName(QString::fromUtf8("LineEditC"));
        LineEditC->setGeometry(QRect(60, 340, 113, 41));
        LineEditC->setFont(font2);
        Discr = new QLabel(centralWidget);
        Discr->setObjectName(QString::fromUtf8("Discr"));
        Discr->setGeometry(QRect(660, 150, 141, 21));
        QFont font4;
        font4.setPointSize(16);
        Discr->setFont(font4);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 200, 31, 20));
        label->setFont(font2);
        TextEditD = new QTextEdit(centralWidget);
        TextEditD->setObjectName(QString::fromUtf8("TextEditD"));
        TextEditD->setGeometry(QRect(660, 190, 141, 51));
        TextEditD->setFont(font2);
        TextEditKoren = new QTextEdit(centralWidget);
        TextEditKoren->setObjectName(QString::fromUtf8("TextEditKoren"));
        TextEditKoren->setGeometry(QRect(420, 430, 351, 51));
        TextEditKoren->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        MainName->setText(QApplication::translate("MainWindow", "\320\240\320\265\321\210\320\265\320\275\320\270\320\265 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\275\320\276\320\263\320\276 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217", nullptr));
        Info->setText(QApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\275\320\276\320\263\320\276 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217, \320\262\320\260\320\274 \320\275\321\203\320\266\320\275\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 3 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\270 \320\275\320\260\320\266\320\260\321\202\321\214 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        A->setText(QApplication::translate("MainWindow", "A =", nullptr));
        B->setText(QApplication::translate("MainWindow", "B =", nullptr));
        C->setText(QApplication::translate("MainWindow", "C =", nullptr));
        Complete->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        Discr->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\272\321\200\320\270\320\274\320\270\320\275\320\260\320\275\321\202", nullptr));
        label->setText(QApplication::translate("MainWindow", "D =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
