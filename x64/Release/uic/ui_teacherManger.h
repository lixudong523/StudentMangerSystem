/********************************************************************************
** Form generated from reading UI file 'teacherManger.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANGER_H
#define UI_TEACHERMANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherManger
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *teacherManger)
    {
        if (teacherManger->objectName().isEmpty())
            teacherManger->setObjectName(QStringLiteral("teacherManger"));
        teacherManger->resize(915, 466);
        label = new QLabel(teacherManger);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 10, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(11);
        label->setFont(font);
        tableWidget = new QTableWidget(teacherManger);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 50, 761, 401));
        widget = new QWidget(teacherManger);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(780, 50, 111, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(teacherManger);

        QMetaObject::connectSlotsByName(teacherManger);
    } // setupUi

    void retranslateUi(QWidget *teacherManger)
    {
        teacherManger->setWindowTitle(QApplication::translate("teacherManger", "teacherManger", Q_NULLPTR));
        label->setText(QApplication::translate("teacherManger", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teacherManger", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("teacherManger", "\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("teacherManger", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherManger: public Ui_teacherManger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANGER_H
