#include "adding.h"

void append()
{
    const int append_width = 21;
    //Append QList
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            list.append(QString::number(i));
        }
        qDebug() << fmt("Append QList", append_width) << time();
    }
    //------------------------------------------------
    //Append QVector
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            vector.append(QString::number(i));
        }
        qDebug() << fmt("Append QVector", append_width) << time();
    }
    //------------------------------------------------
    //Append QLinkedList
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            linkedList.append(QString::number(i));
        }
        qDebug() << fmt("Append QLinkedList", append_width) << time();
    }
    //------------------------------------------------
    //Append QSet
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            set << QString::number(i);
        }
        qDebug() << fmt("Append QSet", append_width) << time();
    }
    //------------------------------------------------
    //Append QMap
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            map[i] = QString::number(i);
        }
        qDebug() << fmt("Append QMap", append_width) << time();
    }
    //------------------------------------------------
    //Append QHash
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            hash[i] = QString::number(i);
        }
        qDebug() << fmt("Append QHash", append_width) << time();
    }
}

void prepend()
{
    const int prepend_width = 21;
    //Prepend QList
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            list.prepend(QString::number(-i));
        }
        qDebug() << fmt("Prepend QList", prepend_width) << time();
    }
//------------------------------------------------
#ifndef SKIP_PREPEND_VECTOR
    //Prepend QVector
    {
        start();
        for (int i = 0; i < size; ++i)
        {
            vector.prepend(QString::number(-i));
        }
        qDebug() << fmt("Prepend QVector", prepend_width) << time();
    }
#endif
}

void benmark_adding()
{
    append();
    //    prepend();
}
