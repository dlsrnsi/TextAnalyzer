#pragma once
#include "qstring.h"
#include "qtextcodec.h"


class Morph
{
public :
	QString numberOfMorph;
	QString morphuni;
	QString pos;
	Morph(QString numberofMorph, char* morph, QString pos);
	QString toUniString(char* str);
};