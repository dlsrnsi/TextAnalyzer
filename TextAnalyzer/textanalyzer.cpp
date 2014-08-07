#include "textanalyzer.h"

TextAnalyzer::TextAnalyzer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.open, SIGNAL(triggered()), this, SLOT(openFile()));
	connect(ui.doAnalyze, SIGNAL(clicked()), this, SLOT(makeAnalyze()));
	connect(ui.open, SIGNAL(triggered()), ui.doAnalyze, SLOT(setEnabled(true)));
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
	if (!analyzeClass == NULL){
		cout << "이전 텍스트 지움" << endl;
		analyzeClass->~Analyze();
	}
	cout << "새 텍스트" << endl;
	analyzeClass = new Analyze(fileName.toLocal8Bit().data());
	wordModel.setWordModel(analyzeClass->returnResult());
	ui.tableView->setModel(&wordModel);
	cout << "테이블 만들음" << endl;
	
}

TextAnalyzer::~TextAnalyzer()
{

}
