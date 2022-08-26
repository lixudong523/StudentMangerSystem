#pragma once
#include <QWidget>
#include "ui_changeStudentData.h"
typedef struct tempSouredata
{
	QString stu_chineseSoure;
	QString stu_mathSoure;
	QString stu_engelishSoure;
	QString stu_histoySoure;
	QString stu_politicalSoure;
}tempSouredata;
class changeStudentData : public QWidget
{
	Q_OBJECT

public:
	changeStudentData(QWidget *parent = Q_NULLPTR);
	~changeStudentData();
public slots:
	void clickedOK();
	void clickedCance();
signals:
	void okchangeFinsh(tempSouredata);
private:
	Ui::changeStudentData ui;
};
