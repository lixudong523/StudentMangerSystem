#include "StudentMangerSystem.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QMessageBox>
StudentMangerSystem::StudentMangerSystem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_mangerWidget = new manger();
	m_regeisteredWidget = new regeistered();
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(createUse()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(clickedOk()));
}

StudentMangerSystem::~StudentMangerSystem()
{
}
void StudentMangerSystem::createUse()
{
	QString id = ui.lineEdit->text();
}
void StudentMangerSystem::clickedOk()
{
	QString id = ui.lineEdit->text();
	QString password = ui.lineEdit_2->text();
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
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//绑定数据库
			sql = QString::fromLocal8Bit("select * from studentManger_db where 注册名 = '%3'").arg(id);
			bool b_isfind = false;
			bool b_isPasswordCorrect = false;
			if (query.exec(sql))
			{
				int size = query.size();
				while (query.next())//浏览查询结果
				{
					QString findId = query.value(0).toString();
					QString findPassword = query.value(1).toString();
					if (findId == id)
					{
						b_isfind = true;
						if (findPassword == password)
							b_isPasswordCorrect = true;
					}		
				}
			}
			if (b_isfind&&b_isPasswordCorrect)
			{
				m_mangerWidget->show();
				return;
			}
			else if (b_isfind&&b_isPasswordCorrect==false)
			{
				QMessageBox::information(this, QString::fromLocal8Bit("提示"),
					QString::fromLocal8Bit("你输入的密码有误"));
			}
			else
			{
				int ret=QMessageBox::information(this, QString::fromLocal8Bit("提示"),
					QString::fromLocal8Bit("不存在该用户,请注册的"), QMessageBox::Yes, QMessageBox::No);
				ui.lineEdit->clear();
				ui.lineEdit_2->clear();
				if (ret == QMessageBox::Yes)
					m_regeisteredWidget->show();
				else
					return;
			}
		}
	}
}