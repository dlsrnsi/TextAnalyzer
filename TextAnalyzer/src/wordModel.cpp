#include "wordModel.h"

WordModel::WordModel(QObject *parent)
	:QAbstractTableModel(parent)
{
	nameOfPos << "N" << "V" << "B" << "D" << "X" << "A";
	cout << "워드 모델 만듬" << endl;
}
void WordModel::setWordModel(const QList<Morph> &resultList)
{
	morphList = resultList;
}
int WordModel::rowCount(const QModelIndex &) const
{
	cout << "리스트 숫자 : " << morphList.count() << endl;
	return morphList.count();
}
int WordModel::columnCount(const QModelIndex &) const
{
	cout << "열 숫자 : " << nameOfPos.count() << endl;
	return nameOfPos.count();
}
QVariant WordModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid()){
		return QVariant();
	}
	if (role == Qt::TextAlignmentRole){
		return int(Qt::AlignRight | Qt::AlignVCenter);
	}
	else if (role == Qt::DisplayRole){
		cout << "아이템 보여줌" << endl;
		if (getMorphPosFromList(index.row()) == nameOfPos.at(index.column())){
			return getMorphFromList(index.row());
		}
	}
	return QVariant();
}
QVariant WordModel::headerData(int section, Qt::Orientation, int role) const
{
	if (role == Qt::DisplayRole)
		return nameOfPos[section];
	cout << "헤더 데이터 : " << nameOfPos[section].toUtf8().data() << endl;
	return QVariant();
}
QString WordModel::getMorphFromList(int offset) const
{
	return (const_cast<Morph&>(morphList.at(offset))).getMorph();
}
QString WordModel::getMorphPosFromList(int offset) const
{
	return (const_cast<Morph&>(morphList.at(offset))).getmorphPos();
}