#include "mainInterface.h"
mainInterface::mainInterface(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMaximumHeight(165);
	this->setMaximumWidth(250);
	//�������ݿ�
	systemDb = QSqlDatabase::addDatabase("QSQLITE");
	systemDb.setDatabaseName("studentMangerSystem.db");
	bool ok = systemDb.open();
	//��ʾ�����ɹ�
	if (ok)
	{
		QString sql;
		QSqlQuery query;
		sql = QString::fromLocal8Bit("create table student_db(ѧ�� int primary key,���� text,�Ա� char(1),���ĳɼ� int,��ѧ�ɼ� int,Ӣ��ɼ� int,��ʷ�ɼ� int,���γɼ� int)");
		QString sql1;
		QSqlQuery query1;
		sql1 = QString::fromLocal8Bit("create table studentManger_db(ע���� int primary key,ע������ text)");
		QString sql2;
		QSqlQuery query2;
		sql2 = QString::fromLocal8Bit("create table teacherManger_db(ע���� int primary key,ע������ text)");
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