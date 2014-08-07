#include "textanalyzer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextAnalyzer w;
	w.show();
	return a.exec();
}
