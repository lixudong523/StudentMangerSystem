#pragma once
#include "ui_teacherManger.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QMessageBox>
#include <QWidget>
#include "addStudentData.h"
#include "changeStudentData.h"
class teacherManger : public QWidget
{
	Q_OBJECT

public:
	teacherManger(QWidget *parent = Q_NULLPTR);
	~teacherManger();
	void readSqlData();
public slots:
	void addData(tempdata m_data);
	void deleteData();
	void showDiget();
	void showChangeDioget();
	void changeData(tempSouredata data);
	void onItemClicked(QTableWidgetItem *item);
private:
	Ui::teacherManger ui;
	addStudentData *m_addStudentData;
	changeStudentData * m_changeStudentData;
	std::vector<tempdata> m_studentData;
	QTableWidgetItem * m_item;//保存选中的一行
};
