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
	//�������ݿ�
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("studentManger_db"))
		{
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//�����ݿ�
			sql = QString::fromLocal8Bit("select * from studentManger_db where ע���� = '%3'").arg(id);
			bool b_isfind = false;
			bool b_isPasswordCorrect = false;
			if (query.exec(sql))
			{
				int size = query.size();
				while (query.next())//�����ѯ���
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
				QMessageBox::information(this, QString::fromLocal8Bit("��ʾ"),
					QString::fromLocal8Bit("���������������"));
			}
			else
			{
				int ret=QMessageBox::information(this, QString::fromLocal8Bit("��ʾ"),
					QString::fromLocal8Bit("�����ڸ��û�,��ע���"), QMessageBox::Yes, QMessageBox::No);
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