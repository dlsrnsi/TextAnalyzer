#include "ctype.h"
#include <iostream>
#include "..\header\ham-kma.h"
#include "QtCore/qlist.h"
#include "morph.h"
#include "QtCore\qregexp.h"
using namespace std;


class Analyze
{
	int numofToken;
	QRegExp  *rx;
	HAM_MORES2	HamOut2;
	FILE *fpin, *fpout;
	char *optstr;
	HAM_RUNMODE mode;
	unsigned char sent[SENTSIZE];
	HAM_PMORES hamout1;
	QList<Morph> resultList;

public :
	Analyze(const char *fileName);
	void analyze();
	void finish_Aanlyze();
	void hamout_token(HAM_PMORES2 p, HAM_PRUNMODE hammode);
	QList<Morph> returnResult();
	~Analyze();
};