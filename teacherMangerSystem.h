#pragma once
#include <QWidget>
#include "ui_teacherMangerSystem.h"
#include "manger.h"
#include "teacherRrgeistered.h"
#include "teacherManger.h"
class teacherMangerSystem : public QWidget
{
	Q_OBJECT

public:
	teacherMangerSystem(QWidget *parent = Q_NULLPTR);
	~teacherMangerSystem();
public slots:
	void clickedOK();
	void clickedCreate();

private:
	Ui::teacherMangerSystem ui;
	teacherManger * m_mangerWidget;
	teacherRrgeistered * m_teacherRrgeistered;
};
