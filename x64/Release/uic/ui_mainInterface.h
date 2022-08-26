/********************************************************************************
** Form generated from reading UI file 'mainInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAININTERFACE_H
#define UI_MAININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainInterface
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_teacher;
    QPushButton *pushButton_student;

    void setupUi(QWidget *mainInterface)
    {
        if (mainInterface->objectName().isEmpty())
            mainInterface->setObjectName(QStringLiteral("mainInterface"));
        mainInterface->resize(250, 165);
        layoutWidget = new QWidget(mainInterface);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 191, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_teacher = new QPushButton(layoutWidget);
        pushButton_teacher->setObjectName(QStringLiteral("pushButton_teacher"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        pushButton_teacher->setFont(font);

        verticalLayout->addWidget(pushButton_teacher);

        pushButton_student = new QPushButton(layoutWidget);
        pushButton_student->setObjectName(QStringLiteral("pushButton_student"));
        pushButton_student->setFont(font);

        verticalLayout->addWidget(pushButton_student);


        retranslateUi(mainInterface);

        QMetaObject::connectSlotsByName(mainInterface);
    } // setupUi

    void retranslateUi(QWidget *mainInterface)
    {
        mainInterface->setWindowTitle(QApplication::translate("mainInterface", "mainInterface", Q_NULLPTR));
        pushButton_teacher->setText(QApplication::translate("mainInterface", "\346\210\221\346\230\257\350\200\201\345\270\210", Q_NULLPTR));
        pushButton_student->setText(QApplication::translate("mainInterface", "\346\210\221\346\230\257\345\255\246\347\224\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainInterface: public Ui_mainInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAININTERFACE_H
