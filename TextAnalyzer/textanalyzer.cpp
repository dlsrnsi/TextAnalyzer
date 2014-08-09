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
	analyzeClass = new Analyze(fileName.toLocal8Bit().data());
	morphList = analyzeClass->returnMorphList();
	for (int i = 0; i < morphList.count(); i++){
		ui.tableWidget->insertRow(i);
		QTableWidgetItem *item0 = new QTableWidgetItem;
		QTableWidgetItem *item1 = new QTableWidgetItem;
		QTableWidgetItem *item2 = new QTableWidgetItem;
		ui.tableWidget->setItem(i, 0, item0);
		ui.tableWidget->setItem(i, 1, item1);
		ui.tableWidget->setItem(i, 2, item2);
		Morph morph = morphList.at(i);
		ui.tableWidget->item(i, 0)->setText(morph.numberOfMorph);
		ui.tableWidget->item(i, 1)->setText(morph.morphuni);
		ui.tableWidget->item(i, 2)->setText(morph.pos);
	}
}

TextAnalyzer::~TextAnalyzer()
{

}
