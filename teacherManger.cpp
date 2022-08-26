#include "teacherManger.h"
teacherManger::teacherManger(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMaximumWidth(915);
	this->setMinimumHeight(416);
	m_addStudentData = new addStudentData;
	m_changeStudentData = new changeStudentData;
	QStringList header;
	ui.tableWidget->setColumnCount(8);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->horizontalHeader()->setDefaultSectionSize(90);
	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//��������ѡ��
	header << QString::fromLocal8Bit("ѧ��") << QString::fromLocal8Bit("����")
		<< QString::fromLocal8Bit("�Ա�") << QString::fromLocal8Bit("���ĳɼ�")
		<< QString::fromLocal8Bit("��ѧ�ɼ�") << QString::fromLocal8Bit("Ӣ��ɼ�")
		<< QString::fromLocal8Bit("��ʷ�ɼ�") << QString::fromLocal8Bit("���γɼ�");
	ui.tableWidget->setHorizontalHeaderLabels(header);
	//��ѧ����Ϣ�����ݿ������
	readSqlData();
	for (int i = 0; i < m_studentData.size();i++)
	{
		tempdata m_data= m_studentData.at(i);
		int RowCount = ui.tableWidget->rowCount();
		ui.tableWidget->insertRow(RowCount);
		ui.tableWidget->setItem(RowCount, 0, new QTableWidgetItem(m_data.stu_id));
		ui.tableWidget->setItem(RowCount, 1, new QTableWidgetItem(m_data.stu_name));
		ui.tableWidget->setItem(RowCount, 2, new QTableWidgetItem(m_data.stu_sex));
		ui.tableWidget->setItem(RowCount, 3, new QTableWidgetItem(m_data.stu_chineseSoure));
		ui.tableWidget->setItem(RowCount, 4, new QTableWidgetItem(m_data.stu_mathSoure));
		ui.tableWidget->setItem(RowCount, 5, new QTableWidgetItem(m_data.stu_engelishSoure));
		ui.tableWidget->setItem(RowCount, 6, new QTableWidgetItem(m_data.stu_histoySoure));
		ui.tableWidget->setItem(RowCount, 7, new QTableWidgetItem(m_data.stu_politicalSoure));
	}
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(showDiget()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(deleteData()));
	connect(ui.pushButton_2, SIGNAL(clicked()),this, SLOT(showChangeDioget()));
	connect(m_addStudentData, SIGNAL(okFinsh(tempdata)),this, SLOT(addData(tempdata )));
	connect(m_changeStudentData, SIGNAL(okchangeFinsh(tempSouredata)), this, SLOT(changeData(tempSouredata)));
	connect(ui.tableWidget,&QTableWidget::itemClicked,this,&teacherManger::onItemClicked);
}
void teacherManger::showDiget()
{
	m_addStudentData->ui.lineEdit_2->clear();
	m_addStudentData->ui.lineEdit_3->clear();
	m_addStudentData->ui.lineEdit_4->clear();
	m_addStudentData->ui.lineEdit_5->clear();
	m_addStudentData->ui.lineEdit_6->clear();
	m_addStudentData->ui.lineEdit_7->clear();
	m_addStudentData->ui.lineEdit_8->clear();
	m_addStudentData->ui.lineEdit_9->clear();
	m_addStudentData->show();
}
void teacherManger::showChangeDioget()
{
	m_changeStudentData->show();
}
teacherManger::~teacherManger()
{
}
void teacherManger::addData(tempdata m_data)
{
	int RowCount = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(RowCount);
	ui.tableWidget->setItem(RowCount,0, new QTableWidgetItem(m_data.stu_id));
	ui.tableWidget->setItem(RowCount,1, new QTableWidgetItem(m_data.stu_name));
	ui.tableWidget->setItem(RowCount,2, new QTableWidgetItem(m_data.stu_sex));
	ui.tableWidget->setItem(RowCount,3, new QTableWidgetItem(m_data.stu_chineseSoure));
	ui.tableWidget->setItem(RowCount,4, new QTableWidgetItem(m_data.stu_mathSoure));
	ui.tableWidget->setItem(RowCount,5, new QTableWidgetItem(m_data.stu_engelishSoure));
	ui.tableWidget->setItem(RowCount,6, new QTableWidgetItem(m_data.stu_histoySoure));
	ui.tableWidget->setItem(RowCount,7, new QTableWidgetItem(m_data.stu_politicalSoure));
	QString id = m_data.stu_id;
	QString name = m_data.stu_name;
	QString sex = m_data.stu_sex;
	QString chinese = m_data.stu_chineseSoure;
	QString math = m_data.stu_mathSoure;
	QString english = m_data.stu_engelishSoure;
	QString history = m_data.stu_histoySoure;
	QString politicat = m_data.stu_politicalSoure;
	//�������ݿ�
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("student_db"))
		{
			QString sql1;
			QSqlQuery query1;
			sql1 = QString::fromLocal8Bit("insert into student_db (ѧ��,����,�Ա�,���ĳɼ�,��ѧ�ɼ�,Ӣ��ɼ�,��ʷ�ɼ�,���γɼ�)"
				"values (%1,'%2','%3',%4,%5,%6,%7,%8)").arg(id).arg(name).arg(sex)
				.arg(chinese).arg(math).arg(english).arg(history).arg(politicat);
			bool b_regeistere = query1.exec(sql1);
			if (b_regeistere)
				m_addStudentData->close();			
		}
	}
}
void teacherManger::deleteData()
{
	int row = m_item->row();
	QString id = ui.tableWidget->item(row, 0)->text();
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	bool b_isDeleteOk = false;
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("student_db"))
		{
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//�����ݿ�
			sql = QString::fromLocal8Bit("delete  from student_db where ѧ�� = '%1' ").arg(id);
			b_isDeleteOk = query.exec(sql);
		}
	}
	if (b_isDeleteOk)
	{
		for (int i = ui.tableWidget->rowCount() - 1; i >= 0; i--) 
		{
			ui.tableWidget->removeRow(i); //�����һ����ǰɾ
		}
		readSqlData();
		for (int i = 0; i < m_studentData.size(); i++)
		{
			tempdata m_data = m_studentData.at(i);
			int RowCount = ui.tableWidget->rowCount();
			ui.tableWidget->insertRow(RowCount);
			ui.tableWidget->setItem(RowCount, 0, new QTableWidgetItem(m_data.stu_id));
			ui.tableWidget->setItem(RowCount, 1, new QTableWidgetItem(m_data.stu_name));
			ui.tableWidget->setItem(RowCount, 2, new QTableWidgetItem(m_data.stu_sex));
			ui.tableWidget->setItem(RowCount, 3, new QTableWidgetItem(m_data.stu_chineseSoure));
			ui.tableWidget->setItem(RowCount, 4, new QTableWidgetItem(m_data.stu_mathSoure));
			ui.tableWidget->setItem(RowCount, 5, new QTableWidgetItem(m_data.stu_engelishSoure));
			ui.tableWidget->setItem(RowCount, 6, new QTableWidgetItem(m_data.stu_histoySoure));
			ui.tableWidget->setItem(RowCount, 7, new QTableWidgetItem(m_data.stu_politicalSoure));
		}
	}
}
void teacherManger::changeData(tempSouredata data)
{
	int row = m_item->row();
	QString id = ui.tableWidget->item(row, 0)->text();
	QString chinese = data.stu_chineseSoure;
	QString math = data.stu_mathSoure;
	QString english = data.stu_engelishSoure;
	QString history = data.stu_histoySoure;
	QString politicat = data.stu_politicalSoure;
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	bool b_isDeleteOk = false;
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("student_db"))
		{
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//�����ݿ�
			sql = QString::fromLocal8Bit("update  student_db set ���ĳɼ�=%1,��ѧ�ɼ� = %2, Ӣ��ɼ� = %3,��ʷ�ɼ� = %4,���γɼ� = %5 where ѧ�� = %6 ")
				.arg(chinese).arg(math).arg(english).arg(history).arg(politicat).arg(id);
			b_isDeleteOk = query.exec(sql);
		}
	}
	if (b_isDeleteOk)
	{
		for (int i = ui.tableWidget->rowCount() - 1; i >= 0; i--)
		{
			ui.tableWidget->removeRow(i); //�����һ����ǰɾ
		}
		readSqlData();
		for (int i = 0; i < m_studentData.size(); i++)
		{
			tempdata m_data = m_studentData.at(i);
			int RowCount = ui.tableWidget->rowCount();
			ui.tableWidget->insertRow(RowCount);
			ui.tableWidget->setItem(RowCount, 0, new QTableWidgetItem(m_data.stu_id));
			ui.tableWidget->setItem(RowCount, 1, new QTableWidgetItem(m_data.stu_name));
			ui.tableWidget->setItem(RowCount, 2, new QTableWidgetItem(m_data.stu_sex));
			ui.tableWidget->setItem(RowCount, 3, new QTableWidgetItem(m_data.stu_chineseSoure));
			ui.tableWidget->setItem(RowCount, 4, new QTableWidgetItem(m_data.stu_mathSoure));
			ui.tableWidget->setItem(RowCount, 5, new QTableWidgetItem(m_data.stu_engelishSoure));
			ui.tableWidget->setItem(RowCount, 6, new QTableWidgetItem(m_data.stu_histoySoure));
			ui.tableWidget->setItem(RowCount, 7, new QTableWidgetItem(m_data.stu_politicalSoure));
		}
	}
}
void teacherManger::readSqlData()
{
	m_studentData.clear();
	//�����ݿ��������
	QSqlDatabase systemDb = QSqlDatabase::addDatabase("QSQLITE");
	QString tableName = "studentMangerSystem.db";
	systemDb.setDatabaseName(tableName);
	bool ok = systemDb.open();
	if (ok)
	{
		QStringList tables = systemDb.tables(); //��ȡ���ݿ��еı�
		if (tables.contains("student_db"))
		{
			QString sql;
			QSqlQuery query = QSqlQuery(systemDb);//�����ݿ�
			sql = QString::fromLocal8Bit("select * from student_db ");
			if (query.exec(sql))
			{
				while (query.next())
				{
					tempdata studentData;
					studentData.stu_id = query.value(0).toString();
					studentData.stu_name = query.value(1).toString();
					studentData.stu_sex = query.value(2).toString();
					studentData.stu_chineseSoure = query.value(3).toString();
					studentData.stu_mathSoure = query.value(4).toString();
					studentData.stu_engelishSoure = query.value(5).toString();
					studentData.stu_histoySoure = query.value(6).toString();
					studentData.stu_politicalSoure = query.value(7).toString();
					m_studentData.push_back(studentData);
				}
			}
		}
	}
}
void teacherManger::onItemClicked(QTableWidgetItem *item)
{
	m_item = item;
}