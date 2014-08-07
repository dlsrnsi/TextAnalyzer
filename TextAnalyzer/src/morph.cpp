#include "morph.h"

Morph::Morph(QString morphPos, QString morph)
{
	this->morphPos = morphPos;
	this->morph = morph;
}

QString Morph::getMorph()
{
	cout << morph.toUtf8().data();
	return morph;
}
QString Morph::getmorphPos()
{
	cout << morphPos.toUtf8().data();
	return morphPos;
}