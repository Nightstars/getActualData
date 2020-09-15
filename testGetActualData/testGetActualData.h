#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testGetActualData.h"

class testGetActualData : public QMainWindow
{
	Q_OBJECT

public:
	testGetActualData(QWidget *parent = Q_NULLPTR);

private:
	Ui::testGetActualDataClass ui;
};
