#include <QtWidgets/QApplication>
#include "mainInterface.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include <QDebug>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mainInterface w;
	w.show();
	return a.exec();
}
