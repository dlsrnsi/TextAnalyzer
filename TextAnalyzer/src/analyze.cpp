#include "analyze.h"

extern int get_sent_or_line(	/* read a sentence from input file */
	FILE *fp,
	unsigned char *sent,
	unsigned char inputmode);

Analyze::Analyze(const char *fileName)
{
	numofToken = 0;
	rx = new QRegExp("N|V|B|D|X|A");
	fopen_s(&fpin, fileName, "r");
	optstr = NULL;
	int flag = open_HAM(&mode, optstr, "./hdic/KLT2000.ini");
	analyze();
	
}
QList<Morph> Analyze::returnMorphList(){
	return morphList;
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
			char* token = reinterpret_cast<char*>(pr->token[k]);
			cout << *pr->token[k] << endl;
			QString pos = (pr->pos[k]);
			if (rx->exactMatch(pos)){
				QString numberOfMorph = QString::number(numofToken+1);
				cout << reinterpret_cast<char*>(pr->token[k]) << pr->pos[k] << endl;
				Morph *morph = new Morph(numberOfMorph, token, pos);
				morphList.insert(numofToken, *morph);
				numofToken++;
			}
		}
	}
	
}
Analyze::~Analyze()
{

}