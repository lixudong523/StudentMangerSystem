#pragma once
#include <QWidget>
#include "ui_StudentMangerSystem.h" 
#include "manger.h"
#include "regeistered.h"
class StudentMangerSystem : public QWidget
{
	Q_OBJECT

public:
	StudentMangerSystem(QWidget *parent = Q_NULLPTR);
	~StudentMangerSystem();
public slots:
	void createUse();
	void clickedOk();
private:
	Ui::StudentMangerSystem ui;
	manger * m_mangerWidget;
	regeistered *m_regeisteredWidget;
};
