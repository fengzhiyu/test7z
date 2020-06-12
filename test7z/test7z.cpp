#include "test7z.h"
#include <QFileDialog>
#include <QProcess>
#include <QDebug>
#include <QElapsedTimer>
test7z::test7z(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

test7z::~test7z()
{

}

void test7z::on_compress_clicked()
{
	QProcess myProcess(this);
	QString program =  ".\\compress.bat";
	QStringList arguments;
	arguments<<"";//���ݵ�exe�Ĳ���
	myProcess.start(program,arguments);
	QElapsedTimer timer;
	timer.start();
	while (myProcess.waitForFinished(100) == false) 
	{
		QByteArray qByteRead = myProcess.readAllStandardOutput();
		if (!qByteRead.isEmpty())
		{
			ui.textBrowser->append(QString::fromLocal8Bit(qByteRead));
			repaint();
		}
		if (timer.hasExpired(10*1000))
		{//ִ��ʧ��
			break;
		}
		
	}
	QByteArray qByteRead = myProcess.readAllStandardOutput();
	ui.textBrowser->append(QString::fromLocal8Bit(qByteRead));
	qDebug()<<QString::fromLocal8Bit(qByteRead);
	qDebug()<<"�������";

}

void test7z::on_decompress_clicked()
{
	QProcess myProcess(this);
	QString program =  ".\\decompress.bat";
	QStringList arguments;
	arguments<<"";//���ݵ�exe�Ĳ���
	myProcess.start(program,arguments);
	QElapsedTimer timer;
	timer.start();
	while (myProcess.waitForFinished(100) == false) 
	{
		QByteArray qByteRead = myProcess.readAllStandardOutput();
		if (!qByteRead.isEmpty()) 
		{
			ui.textBrowser->append(QString::fromLocal8Bit(qByteRead));
			repaint();
		}
		if (timer.hasExpired(10*1000))
		{//ִ��ʧ��
			break;
		}
	}
	QByteArray qByteRead = myProcess.readAllStandardOutput();
	ui.textBrowser->append(QString::fromLocal8Bit(qByteRead));
	qDebug()<<QString::fromLocal8Bit(qByteRead);
	qDebug()<<"�������";
}