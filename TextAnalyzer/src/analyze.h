#include "ctype.h"
#include <iostream>
#include "..\header\ham-kma.h"
#include "QtCore\qregexp.h"
#include "qstring.h"
#include "qtablewidget.h"
#include <stdlib.h>
using namespace std;


class Analyze
{
	int numofToken;
	QRegExp  *rx;
	HAM_MORES2	HamOut2;
	FILE *fpin;
	char *optstr;
	HAM_RUNMODE mode;
	unsigned char sent[SENTSIZE];
	HAM_PMORES hamout1;
	QTableWidget *morphTableWidget;

public :
	Analyze(const char *fileName, QTableWidget &table);
	void analyze();
	void finish_Aanlyze();
	void hamout_token(HAM_PMORES2 p, HAM_PRUNMODE hammode);
	~Analyze();
};