#include "morph.h"

Morph::Morph(QString numberOfMorph, char* morph, QString pos) :numberOfMorph(numberOfMorph), pos(pos)
{
	morphuni = toUniString(morph);
}

QString Morph::toUniString(char* str)
{
	QTextCodec * codec = QTextCodec::codecForName("eucKR");
	QString localeStr = codec->toUnicode(str);
	return localeStr;
}