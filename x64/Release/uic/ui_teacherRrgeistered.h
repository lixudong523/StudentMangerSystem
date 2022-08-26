/********************************************************************************
** Form generated from reading UI file 'teacherRrgeistered.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERRRGEISTERED_H
#define UI_TEACHERRRGEISTERED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherRrgeistered
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *teacherRrgeistered)
    {
        if (teacherRrgeistered->objectName().isEmpty())
            teacherRrgeistered->setObjectName(QStringLiteral("teacherRrgeistered"));
        teacherRrgeistered->resize(322, 244);
        label_2 = new QLabel(teacherRrgeistered);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 81, 21));
        label = new QLabel(teacherRrgeistered);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 181, 61));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(28);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        lineEdit_2 = new QLineEdit(teacherRrgeistered);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 130, 202, 21));
        lineEdit = new QLineEdit(teacherRrgeistered);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 90, 202, 21));
        label_3 = new QLabel(teacherRrgeistered);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 81, 21));
        lineEdit_3 = new QLineEdit(teacherRrgeistered);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 170, 202, 21));
        label_4 = new QLabel(teacherRrgeistered);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 81, 21));
        pushButton = new QPushButton(teacherRrgeistered);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 210, 93, 28));
        pushButton_2 = new QPushButton(teacherRrgeistered);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 210, 93, 28));

        retranslateUi(teacherRrgeistered);

        QMetaObject::connectSlotsByName(teacherRrgeistered);
    } // setupUi

    void retranslateUi(QWidget *teacherRrgeistered)
    {
        teacherRrgeistered->setWindowTitle(QApplication::translate("teacherRrgeistered", "teacherRrgeistered", Q_NULLPTR));
        label_2->setText(QApplication::translate("teacherRrgeistered", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("teacherRrgeistered", "\346\263\250\345\206\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("teacherRrgeistered", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("teacherRrgeistered", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherRrgeistered", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherRrgeistered", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherRrgeistered: public Ui_teacherRrgeistered {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERRRGEISTERED_H
