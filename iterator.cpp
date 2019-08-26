#include "iterator.h"
static const qint64 sum_result = 499999500000;
static qint64 sum;
static qint64 i;

static const char* checksum()
{
    if (sum != sum_result)
    {
        qDebug() << QString::number(sum).toStdString().c_str();
    }
    return nullptr;
}

static const int lIterator_width = 25;
static const int lMIterator_width = 45;
void ListForLoop()
{
    start();
    sum = 0;
    for (QString i : list)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QList for loop", lIterator_width) << time() << checksum();
}
void ListIterator_forward()
{
    start();
    sum = 0;
    QListIterator<QString> listIterator(list);
    while (listIterator.hasNext())
    {
        sum += listIterator.next().toInt();
    }
    qDebug() << fmt("QListIterator forward", lIterator_width) << time() << checksum();
}
void ListIterator_backward()
{
    start();
    sum = 0;
    QListIterator<QString> listIterator(list);
    listIterator.toBack();
    while (listIterator.hasPrevious())
    {
        sum += listIterator.previous().toInt();
    }
    qDebug() << fmt("QListIterator backward", lIterator_width) << time() << checksum();
}
void MutableListIterator()
{
    start();
    sum = 0;
    QMutableListIterator<QString> listIterator(list);
    while (listIterator.hasNext())
    {
        sum += listIterator.next().toInt();
    }
    qDebug() << fmt("QMutableListIterator", lIterator_width) << time() << checksum();
}

void MutableListIterator_QString()
{
    start();
    QMutableListIterator<QString> listMutableIterator(list);
    i = 0;
    while (listMutableIterator.hasNext())
    {
        listMutableIterator.next();
        listMutableIterator.setValue("value=" + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator Change QString", lMIterator_width) << time() << checksum();
}
void MutableListIterator_QStringLiteral()
{
    start();
    QMutableListIterator<QString> listMutableIterator(list);
    i = 0;
    while (listMutableIterator.hasNext())
    {
        listMutableIterator.next();
        listMutableIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QStringLiteral", lMIterator_width) << time() << checksum();
}
void MutableListIterator_QLatin1String()
{
    start();
    QMutableListIterator<QString> listIt(list);
    i = 0;
    while (listIt.hasNext())
    {
        listIt.next();
        listIt.setValue(QLatin1String("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QLatin1String", lMIterator_width) << time() << checksum();
}
void MutableListIterator_QLatin1Literal()
{
    start();
    QMutableListIterator<QString> listMutableIterator(list);
    i = 0;
    while (listMutableIterator.hasNext())
    {
        listMutableIterator.next();
        listMutableIterator.setValue(QLatin1Literal("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QLatin1Literal", lMIterator_width) << time() << checksum();
}
void MutableListIterator_QStringLiteral_backward()
{
    start();
    QMutableListIterator<QString> listMutableIterator(list);
    i = 0;
    listMutableIterator.toBack();
    while (listMutableIterator.hasPrevious())
    {
        listMutableIterator.previous();
        listMutableIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QStringLiteral backward", lMIterator_width) << time() << checksum();
}

static const int vIterator_width = 25;
static const int vMIterator_width = 45;
void VectorForLoop()
{
    start();
    sum = 0;
    for (QString i : vector)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QVector for loop", vIterator_width) << time() << checksum();
}
void VectorIterator_forward()
{
    start();
    sum = 0;
    QVectorIterator<QString> vectorIterator(vector);
    while (vectorIterator.hasNext())
    {
        sum += vectorIterator.next().toInt();
    }
    qDebug() << fmt("QVectorIterator forward", vIterator_width) << time() << checksum();
}
void VectorIterator_backward()
{
    start();
    sum = 0;
    QVectorIterator<QString> vectorIterator(vector);
    vectorIterator.toBack();
    while (vectorIterator.hasPrevious())
    {
        sum += vectorIterator.previous().toInt();
    }
    qDebug() << fmt("QVectorIterator backward", vIterator_width) << time() << checksum();
}

void MutableVectorIterator()
{
    start();
    sum = 0;
    QMutableVectorIterator<QString> mutableVectorIterator(vector);
    while (mutableVectorIterator.hasNext())
    {
        sum += mutableVectorIterator.next().toInt();
    }
    qDebug() << fmt("QMutableVectorIterator", vMIterator_width) << time() << checksum();
}
void MutableVectorIterator_QLatin1Literal()
{
    start();
    QMutableVectorIterator<QString> mutableVectorIterator(vector);
    i = 0;
    while (mutableVectorIterator.hasNext())
    {
        mutableVectorIterator.next();
        mutableVectorIterator.setValue(QLatin1Literal("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QLatin1Literal", vMIterator_width) << time() << checksum();
}
void MutableVectorIterator_QLatin1Literal_backward()
{
    start();
    QMutableVectorIterator<QString> mutableVectorIterator(vector);
    i = 0;
    mutableVectorIterator.toBack();
    while (mutableVectorIterator.hasPrevious())
    {
        mutableVectorIterator.previous();
        mutableVectorIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableListIterator QStringLiteral backward", vMIterator_width) << time() << checksum();
}

static const int llIterator_width = 25;
static const int llMIterator_width = 45;
void LinkedListForLoop()
{
    start();
    sum = 0;
    for (QString i : linkedList)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QLinkedList for loop", llIterator_width) << time() << checksum();
}
void LinkedListIterator_forward()
{
    start();
    sum = 0;
    QLinkedListIterator<QString> llIterator(linkedList);
    while (llIterator.hasNext())
    {
        sum += llIterator.next().toInt();
    }
    qDebug() << fmt("QLinkedListIterator forward", llIterator_width) << time() << checksum();
}
void LinkedListIterator_backward()
{
    start();
    sum = 0;
    QLinkedListIterator<QString> llIterator(linkedList);
    llIterator.toBack();
    while (llIterator.hasPrevious())
    {
        sum += llIterator.previous().toInt();
    }
    qDebug() << fmt("QLinkedListIterator backward", llIterator_width) << time() << checksum();
}

void MutableLinkedListIterator()
{
    start();
    sum = 0;
    QMutableLinkedListIterator<QString> mutableVectorIterator(linkedList);
    while (mutableVectorIterator.hasNext())
    {
        sum += mutableVectorIterator.next().toInt();
    }
    qDebug() << fmt("QMutableLinkedListIterator", llMIterator_width) << time() << checksum();
}
void MutableLinkedListIterator_QLatin1Literal()
{
    start();
    QMutableLinkedListIterator<QString> mutableVectorIterator(linkedList);
    i = 0;
    while (mutableVectorIterator.hasNext())
    {
        mutableVectorIterator.next();
        mutableVectorIterator.setValue(QLatin1Literal("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableLinkedListIterator QLatin1Literal", llMIterator_width) << time() << checksum();
}
void MutableLinkedListIterator_QLatin1Literal_backward()
{
    start();
    QMutableLinkedListIterator<QString> mLLIterator(linkedList);
    i = 0;
    mLLIterator.toBack();
    while (mLLIterator.hasPrevious())
    {
        mLLIterator.previous();
        mLLIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableLinkedListIterator QStringLiteral backward", llMIterator_width) << time() << checksum();
}

static const int setIterator_width = 25;
void SetForLoop()
{
    start();
    sum = 0;
    for (QString i : set)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QSet for loop", setIterator_width) << time() << checksum();
}
void SetIterator_forward()
{
    start();
    sum = 0;
    QSetIterator<QString> setIterator(set);
    while (setIterator.hasNext())
    {
        sum += setIterator.next().toInt();
    }
    qDebug() << fmt("QSetIterator forward", setIterator_width) << time() << checksum();
}
void SetIterator_backward()
{
    start();
    sum = 0;
    QSetIterator<QString> setIterator(set);
    setIterator.toBack();
    while (setIterator.hasPrevious())
    {
        sum += setIterator.previous().toInt();
    }
    qDebug() << fmt("QSetIterator backward", setIterator_width) << time() << checksum();
}

void MutableSetIterator()
{
    start();
    sum = 0;
    QMutableSetIterator<QString> mutableSetIterator(set);
    while (mutableSetIterator.hasNext())
    {
        sum += mutableSetIterator.next().toInt();
    }
    qDebug() << fmt("QMutableSetIterator", setIterator_width) << time() << checksum();
}

static const int mapIterator_width = 25;
static const int mapMIterator_width = 45;
void MapForLoop()
{
    start();
    sum = 0;
    for (QString i : map)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QMap for loop", mapIterator_width) << time() << checksum();
}
void MapStdForLoop()
{
    start();
    sum = 0;
    for (auto i : map.toStdMap())
    {
        sum += i.second.toInt();
    }
    qDebug() << fmt("QMap Std for loop", mapIterator_width) << time() << checksum();
}
void MapKeysForLoop()
{
    start();
    sum = 0;
    for (auto i : map.keys())
    {
        sum += map.value(i).toInt();
    }
    qDebug() << fmt("QMap Keys  for loop", mapIterator_width) << time() << checksum();
}
void MapValuesForLoop()
{
    start();
    sum = 0;
    for (auto i : map.values())
    {
        sum += i.toInt();
    }
    qDebug() << fmt("QMap Values  for loop", mapIterator_width) << time() << checksum();
}
void MapIterator_forward()
{
    start();
    sum = 0;
    QMapIterator<int, QString> mapIterator(map);
    while (mapIterator.hasNext())
    {
        sum += mapIterator.next().value().toInt();
    }
    qDebug() << fmt("QMapIterator forward", mapIterator_width) << time() << checksum();
}
void MapIterator_backward()
{
    start();
    sum = 0;
    QMapIterator<int, QString> mapIterator(map);
    mapIterator.toBack();
    while (mapIterator.hasPrevious())
    {
        sum += mapIterator.previous().value().toInt();
    }
    qDebug() << fmt("QMapIterator backward", mapIterator_width) << time() << checksum();
}

void MutableMapIterator()
{
    start();
    sum = 0;
    QMutableMapIterator<int, QString> mMapIterator(map);
    while (mMapIterator.hasNext())
    {
        sum += mMapIterator.next().value().toInt();
    }
    qDebug() << fmt("QMutableMapIterator", mapMIterator_width) << time() << checksum();
}
void MutableMapIterator_QLatin1Literal()
{
    start();
    QMutableMapIterator<int, QString> mMapIterator(map);
    i = 0;
    while (mMapIterator.hasNext())
    {
        mMapIterator.next();
        mMapIterator.setValue(QLatin1Literal("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableMapIterator QLatin1Literal", mapMIterator_width) << time() << checksum();
}
void MutableMapIterator_QLatin1Literal_backward()
{
    start();
    QMutableMapIterator<int, QString> mMapIterator(map);
    i = 0;
    mMapIterator.toBack();
    while (mMapIterator.hasPrevious())
    {
        mMapIterator.previous();
        mMapIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMap QStringLiteral QStringLiteral backward", mapMIterator_width) << time() << checksum();
}

static const int hashIterator_width = 25;
static const int hashMIterator_width = 45;
void HashForLoop()
{
    start();
    sum = 0;
    for (QString i : hash)
    {
        sum += i.toInt();
    }
    qDebug() << endl << fmt("QHashIterator for loop", hashIterator_width) << time() << checksum();
}
void HashIterator_forward()
{
    start();
    sum = 0;
    QHashIterator<int, QString> hashIterator(hash);
    while (hashIterator.hasNext())
    {
        sum += hashIterator.next().value().toInt();
    }
    qDebug() << fmt("QHashIterator forward", hashIterator_width) << time() << checksum();
}
void HashIterator_backward()
{
    start();
    sum = 0;
    QHashIterator<int, QString> hashIterator(hash);
    hashIterator.toBack();
    while (hashIterator.hasPrevious())
    {
        sum += hashIterator.previous().value().toInt();
    }
    qDebug() << fmt("QHashIterator", hashIterator_width) << time() << checksum();
}

void MutableHashIterator()
{
    start();
    sum = 0;
    QMutableHashIterator<int, QString> mHashIterator(hash);
    while (mHashIterator.hasNext())
    {
        sum += mHashIterator.next().value().toInt();
    }
    qDebug() << fmt("QMutableHashIterator", hashMIterator_width) << time() << checksum();
}
void MutableHashIterator_QLatin1Literal()
{
    start();
    QMutableHashIterator<int, QString> mHashIterator(hash);
    i = 0;
    while (mHashIterator.hasNext())
    {
        mHashIterator.next();
        mHashIterator.setValue(QLatin1Literal("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableHashIterator QLatin1Literal", hashMIterator_width) << time() << checksum();
}
void MutableHashIterator_QLatin1Literal_backward()
{
    start();
    QMutableHashIterator<int, QString> mHashIterator(hash);
    i = 0;
    mHashIterator.toBack();
    while (mHashIterator.hasPrevious())
    {
        mHashIterator.previous();
        mHashIterator.setValue(QStringLiteral("value=") + QString::number(i++));
    }
    qDebug() << fmt("QMutableHashIterator QStringLiteral backward", hashMIterator_width) << time() << checksum();
}

void benmark_iterator()
{
    ListForLoop();
    ListIterator_forward();
    ListIterator_backward();
    MutableListIterator();
    MutableListIterator_QString();
    MutableListIterator_QStringLiteral();
    MutableListIterator_QLatin1String();
    MutableListIterator_QLatin1Literal();
    MutableListIterator_QStringLiteral_backward();

    VectorForLoop();
    VectorIterator_forward();
    VectorIterator_backward();
    MutableVectorIterator();
    MutableVectorIterator_QLatin1Literal();
    MutableVectorIterator_QLatin1Literal_backward();

    LinkedListForLoop();
    LinkedListIterator_forward();
    LinkedListIterator_backward();
    MutableLinkedListIterator();
    MutableLinkedListIterator_QLatin1Literal();
    MutableLinkedListIterator_QLatin1Literal_backward();

    SetForLoop();
    SetIterator_forward();
    SetIterator_backward();
    MutableSetIterator();

    MapForLoop();
    MapStdForLoop();
    MapKeysForLoop();
    MapValuesForLoop();
    MapIterator_forward();
    MapIterator_backward();
    MutableMapIterator();
    MutableMapIterator_QLatin1Literal();
    MutableMapIterator_QLatin1Literal_backward();

    HashForLoop();
    HashIterator_forward();
    HashIterator_backward();
    MutableHashIterator();
    MutableHashIterator_QLatin1Literal();
    MutableHashIterator_QLatin1Literal_backward();
}
