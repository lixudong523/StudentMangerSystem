#pragma once
#include <QWidget>
#include "ui_mainInterface.h"
#include "StudentMangerSystem.h"
#include "teacherMangerSystem.h"
#include <QSqlDatabase>
#include<QSqlQuery>
class mainInterface : public QWidget
{
	Q_OBJECT

public:
	mainInterface(QWidget *parent = Q_NULLPTR);
	~mainInterface();
	QSqlDatabase getDb();
public slots:
	void teacherClick();
	void studentClick();
private:
	Ui::mainInterface ui;
	StudentMangerSystem * m_StudentMangerSystem;
	teacherMangerSystem * m_teacherMangerSystem;
	QSqlDatabase systemDb;
};
