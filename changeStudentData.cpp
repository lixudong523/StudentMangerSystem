#include "changeStudentData.h"
changeStudentData::changeStudentData(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(clickedOK()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(clickedCance()));
}

changeStudentData::~changeStudentData()
{
}
void changeStudentData::clickedOK()
{
	tempSouredata data;
	data.stu_chineseSoure = ui.lineEdit_2->text();
	data.stu_mathSoure = ui.lineEdit_3->text();
	data.stu_engelishSoure = ui.lineEdit_4->text();
	data.stu_histoySoure = ui.lineEdit_5->text();
	data.stu_politicalSoure = ui.lineEdit_6->text();
	emit okchangeFinsh(data);
}
void changeStudentData::clickedCance()
{
	this->close();
}
