/********************************************************************************
** Form generated from reading UI file 'StudentMangerSystem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANGERSYSTEM_H
#define UI_STUDENTMANGERSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMangerSystem
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *StudentMangerSystem)
    {
        if (StudentMangerSystem->objectName().isEmpty())
            StudentMangerSystem->setObjectName(QStringLiteral("StudentMangerSystem"));
        StudentMangerSystem->resize(333, 237);
        layoutWidget = new QWidget(StudentMangerSystem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 110, 241, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label = new QLabel(StudentMangerSystem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 181, 61));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(28);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        layoutWidget_2 = new QWidget(StudentMangerSystem);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 150, 241, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        layoutWidget_3 = new QWidget(StudentMangerSystem);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 190, 241, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        retranslateUi(StudentMangerSystem);

        QMetaObject::connectSlotsByName(StudentMangerSystem);
    } // setupUi

    void retranslateUi(QWidget *StudentMangerSystem)
    {
        StudentMangerSystem->setWindowTitle(QApplication::translate("StudentMangerSystem", "StudentMangerSystem", Q_NULLPTR));
        label_2->setText(QApplication::translate("StudentMangerSystem", "\350\264\246\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("StudentMangerSystem", "       \347\231\273\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("StudentMangerSystem", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StudentMangerSystem", "\345\210\233\345\273\272\350\264\246\346\210\267", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("StudentMangerSystem", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentMangerSystem: public Ui_StudentMangerSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANGERSYSTEM_H
