#pragma once

#include <QWidget>
#include "ui_regeistered.h"

class regeistered : public QWidget
{
	Q_OBJECT

public:
	regeistered(QWidget *parent = Q_NULLPTR);
	~regeistered();
public slots:
	void clickedOK();
	void clickCance();
private:
	Ui::regeistered ui;
};
