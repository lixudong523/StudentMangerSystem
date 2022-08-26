#include "mainInterface.h"
mainInterface::mainInterface(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMaximumHeight(165);
	this->setMaximumWidth(250);
	//创建数据库
	systemDb = QSqlDatabase::addDatabase("QSQLITE");
	systemDb.setDatabaseName("studentMangerSystem.db");
	bool ok = systemDb.open();
	//表示创建成功
	if (ok)
	{
		QString sql;
		QSqlQuery query;
		sql = QString::fromLocal8Bit("create table student_db(学号 int primary key,姓名 text,性别 char(1),语文成绩 int,数学成绩 int,英语成绩 int,历史成绩 int,政治成绩 int)");
		QString sql1;
		QSqlQuery query1;
		sql1 = QString::fromLocal8Bit("create table studentManger_db(注册名 int primary key,注册密码 text)");
		QString sql2;
		QSqlQuery query2;
		sql2 = QString::fromLocal8Bit("create table teacherManger_db(注册名 int primary key,注册密码 text)");
		query.exec(sql);
		query1.exec(sql1);
		query2.exec(sql2);
	}
	m_StudentMangerSystem = new StudentMangerSystem();
	m_teacherMangerSystem = new teacherMangerSystem();
	connect(ui.pushButton_student, SIGNAL(clicked()), this, SLOT(studentClick()));
	connect(ui.pushButton_teacher, SIGNAL(clicked()), this, SLOT(teacherClick()));
}

mainInterface::~mainInterface()
{
}
void mainInterface::teacherClick()
{
	this->hide();
	m_teacherMangerSystem->show();
}
void mainInterface::studentClick()
{
	this->hide();
	m_StudentMangerSystem->show();
}
QSqlDatabase mainInterface::getDb()
{
	return  systemDb;
}