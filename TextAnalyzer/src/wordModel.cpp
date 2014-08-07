#include "wordModel.h"

WordModel::WordModel(QObject *parent)
	:QAbstractTableModel(parent)
{
	nameOfPos << "N" << "V" << "B" << "D" << "X" << "A";
	cout << "���� �� ����" << endl;
}
void WordModel::setWordModel(const QList<Morph> &resultList)
{
	morphList = resultList;
}
int WordModel::rowCount(const QModelIndex &) const
{
	cout << "����Ʈ ���� : " << morphList.count() << endl;
	return morphList.count();
}
int WordModel::columnCount(const QModelIndex &) const
{
	cout << "�� ���� : " << nameOfPos.count() << endl;
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
		cout << "������ ������" << endl;
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
	cout << "��� ������ : " << nameOfPos[section].toUtf8().data() << endl;
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