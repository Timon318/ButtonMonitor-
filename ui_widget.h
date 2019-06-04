/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *b1;
    QLabel *b2;
    QLabel *b3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        b1 = new QLabel(Widget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(16, 20, 111, 261));
        b1->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        b2 = new QLabel(Widget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(150, 20, 111, 261));
        b2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        b3 = new QLabel(Widget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(280, 20, 111, 261));
        b3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        b1->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        b2->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
        b3->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
