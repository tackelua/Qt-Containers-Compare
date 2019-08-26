#pragma once
#include <QtCore>

#define SKIP_PREPEND_VECTOR

#ifndef SKIP_PREPEND_VECTOR
const int size = 100000;
#else
const int size = 1000000;
#endif

#define fmt(s, n) QStringLiteral(s).leftJustified(n, '.').toStdString().data()
#define fm(s) QStringLiteral(s).toStdString().data()

extern QList<QString> list;
extern QVector<QString> vector;
extern QLinkedList<QString> linkedList;
extern QSet<QString> set;
extern QMap<int, QString> map;
extern QHash<int, QString> hash;

void start();
qint64 time();
