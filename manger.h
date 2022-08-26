#pragma once

#include <QWidget>
#include "ui_manger.h"

class manger : public QWidget
{
	Q_OBJECT

public:
	manger(QWidget *parent = Q_NULLPTR);
	~manger();
public slots:
	void refer();

private:
	Ui::manger ui;
};
