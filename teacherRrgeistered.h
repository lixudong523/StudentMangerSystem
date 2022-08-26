#pragma once
#include <QWidget>
#include "ui_teacherRrgeistered.h"
class teacherRrgeistered : public QWidget
{
	Q_OBJECT

public:
	teacherRrgeistered(QWidget *parent = Q_NULLPTR);
	~teacherRrgeistered();
public slots:
	void clickedOK();
	void clickCance();
private:
	Ui::teacherRrgeistered ui;
};
