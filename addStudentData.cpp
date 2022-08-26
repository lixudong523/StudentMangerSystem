#include "addStudentData.h"

addStudentData::addStudentData(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(clickedOK()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(clickedCance()));
	
}

addStudentData::~addStudentData()
{
}
void addStudentData::clickedOK()
{
	tempdata tempdata1;
	tempdata1.stu_id = ui.lineEdit_2->text();
	tempdata1.stu_name = ui.lineEdit_3->text();
	tempdata1.stu_sex = ui.lineEdit_4->text();
	tempdata1.stu_chineseSoure = ui.lineEdit_5->text();
	tempdata1.stu_mathSoure = ui.lineEdit_6->text();
	tempdata1.stu_engelishSoure = ui.lineEdit_7->text();
	tempdata1.stu_histoySoure = ui.lineEdit_8->text();
	tempdata1.stu_politicalSoure = ui.lineEdit_9->text();
	emit okFinsh(tempdata1);
}
void addStudentData::clickedCance()
{
	this->hide();
}