#include "analyze.h"

extern int get_sent_or_line(	/* read a sentence from input file */
	FILE *fp,
	unsigned char *sent,
	unsigned char inputmode);

Analyze::Analyze(const char *fileName, QTableWidget &tableWidget)
{
	this->morphTableWidget = &tableWidget;
	numofToken = 0;
	rx = new QRegExp("N|V|B|D|X|A");
	fopen_s(&fpin, fileName, "r");
	optstr = NULL;
	int flag = open_HAM(&mode, optstr, "./hdic/KLT2000.ini");
	analyze();
	
}
void Analyze::analyze()
{
	while (get_sent_or_line(fpin, sent, mode.inputmode)) {

		hamout1 = morph_anal(sent, &HamOut2, &mode);
		hamout_token(&HamOut2, &mode);
	}
}
void Analyze::finish_Aanlyze()
{
	close_HAM();
}
void Analyze::hamout_token(
	HAM_PMORES2 p,
	HAM_PRUNMODE hammode
	) {
	HAM_SHORT i, j, k;
	HAM_PWORD2 pw;
	HAM_PRESULT2 pr;
	for (i = 0; i < p->nword; i++) {
		pw = (p->word) + i;	/* i-th word in a sentence */
		pr = (pw->result);	/* j-th HAM result for word */
		for (k = 0; k < pr->ntoken; k++){
			QString token = reinterpret_cast<char*>(pr->token[k]);
			cout << *pr->token[k] << endl;
			QString pos = (pr->pos[k]);
			if (rx->exactMatch(pos)){
				QString numberOfMorph = QString::number(numofToken);
				cout << reinterpret_cast<char*>(pr->token[k]) << pr->pos[k] << endl;
				morphTableWidget->insertRow(1);
				QTableWidgetItem *item0 = new QTableWidgetItem;
				QTableWidgetItem *item1 = new QTableWidgetItem;
				QTableWidgetItem *item2 = new QTableWidgetItem;
				morphTableWidget->setItem(numofToken, 0, item0);
				morphTableWidget->setItem(numofToken, 1, item1);
				morphTableWidget->setItem(numofToken, 2, item2);
				morphTableWidget->item(numofToken+1, 0)->setText(numberOfMorph);
				morphTableWidget->item(numofToken+1, 1)->setText(token);
				morphTableWidget->item(numofToken+1, 2)->setText(pos);
				numofToken++;
			}
		}
	}
	
}
Analyze::~Analyze()
{

}