#include "test7z.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test7z w;
	w.show();
	return a.exec();
}
