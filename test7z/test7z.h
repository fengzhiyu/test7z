#ifndef TEST7Z_H
#define TEST7Z_H

#include <QtGui/QMainWindow>
#include "ui_test7z.h"

class test7z : public QMainWindow
{
	Q_OBJECT

public:
	test7z(QWidget *parent = 0, Qt::WFlags flags = 0);
	~test7z();

public slots:
	void on_compress_clicked();
	void on_decompress_clicked();

private:
	Ui::test7zClass ui;
};

#endif // TEST7Z_H
