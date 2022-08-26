#include "manger.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QMessageBox>
manger::manger(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("个人信息查询"));
	connect(ui.pushButton, SIGNAL(clicked()),this, SLOT(refer()));
}

manger::~manger()
{
}
void manger::refer()
{
	QString studentId = ui.lineEdit->text();
	//创建数据库
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //获取数据库中的表
		if (tables.contains("student_db"))
		{
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//绑定数据库
			sql = QString::fromLocal8Bit("select * from student_db where 学号 = '%3'").arg(studentId);
			bool b_isHaveData = false;
			QStringList tempData;
			if (query.exec(sql))
			{
				while (query.next())//浏览查询结果
				{
					b_isHaveData = true;
					tempData << query.value(0).toString();
					tempData << query.value(1).toString();
					tempData << query.value(2).toString();
					tempData << query.value(3).toString();
					tempData << query.value(4).toString();
					tempData << query.value(5).toString();
					tempData << query.value(6).toString();
					tempData << query.value(7).toString();
				}
			}
			if (!b_isHaveData)
			{
				QMessageBox::information(this, QString::fromLocal8Bit("提示"),
					QString::fromLocal8Bit("学生信息不存在，或老师没有上传"));
			}
			else
			{
				ui.lineEdit_2->setText(tempData.at(3));
				ui.lineEdit_3->setText(tempData.at(4));
				ui.lineEdit_4->setText(tempData.at(5));
				ui.lineEdit_5->setText(tempData.at(6));
				ui.lineEdit_6->setText(tempData.at(7));
				ui.lineEdit_7->setText(tempData.at(1));
			}

		}


	}
}