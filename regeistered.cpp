#include "regeistered.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QMessageBox>
regeistered::regeistered(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(clickCance()));
	connect(ui.pushButton_2, SIGNAL(clicked()),this, SLOT(clickedOK()));
}

regeistered::~regeistered()
{
}
void regeistered::clickedOK()
{
	QString id = ui.lineEdit->text();
	QString passwordFirst = ui.lineEdit_2->text();
	QString passwordScond = ui.lineEdit_3->text();
	if (passwordFirst!= passwordScond)
	{
		int ret = QMessageBox::information(this, QString::fromLocal8Bit("提示"),
			QString::fromLocal8Bit("两次密码不正确"), QMessageBox::Yes, QMessageBox::No);
		return;
	}
	//创建数据库
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //获取数据库中的表
		if (tables.contains("studentManger_db"))
		{
			QString sql1;
			QSqlQuery query1;
			sql1 = QString::fromLocal8Bit("insert into studentManger_db (注册名,注册密码)"
			"values('%1','%2')").arg(id).arg(passwordScond);
			bool b_regeistere = query1.exec(sql1);
			if (b_regeistere)
				this->close();
		}
	}
}
void regeistered::clickCance()
{



}