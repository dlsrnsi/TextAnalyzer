#ifndef __Morph_H_
#define __Morph_H_

#include <iostream>
#include <QString>
using namespace std;

class Morph
{
private :
	QString morph;
	QString morphPos;

public :
	Morph(QString morphPos, QString morph);
	QString getMorph();
	QString getmorphPos();
};

#endif