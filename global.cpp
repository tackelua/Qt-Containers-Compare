#include "global.h"

QList<QString> list;
QVector<QString> vector;
QLinkedList<QString> linkedList;
QSet<QString> set;
QMap<int, QString> map;
QHash<int, QString> hash;

static qint64 timestamp;
void start()
{
    timestamp = QDateTime::currentMSecsSinceEpoch();
}
qint64 time()
{
    return QDateTime::currentMSecsSinceEpoch() - timestamp;
}
