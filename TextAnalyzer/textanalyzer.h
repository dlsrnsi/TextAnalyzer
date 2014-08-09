#ifndef TEXTANALYZER_H
#define TEXTANALYZER_H

#include <QtWidgets/QMainWindow>
#include "ui_textanalyzer.h"
#include "QtWidgets\qmessagebox.h"
#include "QtWidgets\qfiledialog.h"
#include "qtextstream.h"
#include "qfile.h"
#include "qiodevice.h"
#include "src\analyze.h"
#include "src\morph.h"
#include "qlist.h"

class TextAnalyzer : public QMainWindow
{
	Q_OBJECT

public:
	QString fileName;
	Analyze *analyzeClass;
	TextAnalyzer(QWidget *parent = 0);
	~TextAnalyzer();
	QList<Morph> morphList;

private:
	Ui::TextAnalyzerClass ui;

private slots :
void openFile();
bool saveFile();
bool saveAsFile();
void newFile();
void makeAnalyze();
};

#endif // TEXTANALYZER_H
