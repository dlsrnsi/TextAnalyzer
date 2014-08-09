#include "textanalyzer.h"

TextAnalyzer::TextAnalyzer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.open, SIGNAL(triggered()), this, SLOT(openFile()));
	connect(ui.doAnalyze, SIGNAL(clicked()), this, SLOT(makeAnalyze()));
	connect(ui.open, SIGNAL(triggered()), ui.doAnalyze, SLOT(setEnabled(true)));
	ui.tableWidget->setColumnCount(3);
	ui.tableWidget->setHorizontalHeaderLabels(QStringList() << tr("Number") << tr("Morph") << tr("Pos"));
}
void TextAnalyzer::newFile(){
	
}
void TextAnalyzer::openFile(){
	fileName = QFileDialog::getOpenFileName(this,
		tr("Open TextFile"), ".", tr("Text file(*.txt)"));
	QFile file(fileName);
	file.open(QIODevice::ReadOnly);
	QTextStream in(&file);
	while (!in.atEnd()){
		QString line = in.readLine();
		ui.textBrowser->append(line);
	}
}
bool TextAnalyzer::saveFile(){
	return true;
}
bool TextAnalyzer::saveAsFile(){
	return true;
}
void TextAnalyzer::makeAnalyze(){
	cout << "새 텍스트" << endl;
	analyzeClass = new Analyze(fileName.toLocal8Bit().data(), *ui.tableWidget);
}

TextAnalyzer::~TextAnalyzer()
{

}
