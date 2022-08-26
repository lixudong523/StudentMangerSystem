#include "teacherRrgeistered.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QMessageBox>
teacherRrgeistered::teacherRrgeistered(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(clickCance()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(clickedOK()));
}

teacherRrgeistered::~teacherRrgeistered()
{
}
void teacherRrgeistered::clickedOK()
{
	QString id = ui.lineEdit->text();
	QString passwordFirst = ui.lineEdit_2->text();
	QString passwordScond = ui.lineEdit_3->text();
	if (passwordFirst != passwordScond)
	{
		int ret = QMessageBox::information(this, QString::fromLocal8Bit("��ʾ"),
			QString::fromLocal8Bit("�������벻��ȷ"), QMessageBox::Yes, QMessageBox::No);
		return;
	}
	//�������ݿ�
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("teacherManger_db"))
		{
			QString sql1;
			QSqlQuery query1;
			sql1 = QString::fromLocal8Bit("insert into teacherManger_db (ע����,ע������)"
				"values('%1','%2')").arg(id).arg(passwordScond);
			bool b_regeistere = query1.exec(sql1);
			if (b_regeistere)
				this->close();
		}
	}
}
void teacherRrgeistered::clickCance()
{



}