#include <QtCore\qabstractitemmodel.h>
#include <QtCore\qstringlist.h>
#include "morph.h"

class WordModel : public QAbstractTableModel
{
public :
	WordModel(QObject *parent = 0);
	QStringList nameOfPos;
	QList<Morph> morphList;
	void setWordModel(const QList<Morph> &resultList);
	int rowCount(const QModelIndex &parent) const;
	int columnCount(const QModelIndex &parent) const;
	QVariant data(const QModelIndex &index, int role) const;
	QVariant headerData(int section, Qt::Orientation, int role) const;
	QString getMorphPosFromList(int offset) const;
	QString getMorphFromList(int offset) const;
};