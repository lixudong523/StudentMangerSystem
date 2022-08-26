#pragma once

#include <QWidget>
#include<QDialog>
#include "ui_addStudentData.h"

typedef struct data
{
	QString stu_id;
	QString stu_name;
	QString stu_sex;
	QString stu_chineseSoure;
	QString stu_mathSoure;
	QString stu_engelishSoure;
	QString stu_histoySoure;
	QString stu_politicalSoure;
}tempdata;
class addStudentData : public QDialog
{
	Q_OBJECT

public:
	
	addStudentData(QDialog *parent = Q_NULLPTR);
	~addStudentData();
public slots:
	void clickedOK();
	void clickedCance();
signals:
	void okFinsh(tempdata);
public:
	Ui::addStudentData ui;
};
