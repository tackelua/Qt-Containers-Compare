#pragma once
#include "global.h"

void ListForLoop();
void ListIterator_forward();
void ListIterator_backward();
void MutableListIterator();
void MutableListIterator_QString();
void MutableListIterator_QStringLiteral();
void MutableListIterator_QLatin1String();
void MutableListIterator_QLatin1Literal();
void MutableListIterator_QStringLiteral_backward();

void VectorForLoop();
void VectorIterator_forward();
void VectorIterator_backward();
void MutableVectorIterator();
void MutableVectorIterator_QLatin1Literal();
void MutableVectorIterator_QLatin1Literal_backward();

void LinkedListForLoop();
void LinkedListIterator_forward();
void LinkedListIterator_backward();
void MutableLinkedListIterator();
void MutableLinkedListIterator_QLatin1Literal();
void MutableLinkedListIterator_QLatin1Literal_backward();

void SetForLoop();
void SetIterator_forward();
void SetIterator_backward();
void MutableSetIterator();

void MapForLoop();
void MapStdForLoop();
void MapKeysForLoop();
void MapValuesForLoop();
void MapIterator_forward();
void MapIterator_backward();
void MutableMapIterator();
void MutableMapIterator_QLatin1Literal();
void MutableMapIterator_QLatin1Literal_backward();

void HashForLoop();
void HashIterator_forward();
void HashIterator_backward();
void MutableHashIterator();
void MutableHashIterator_QLatin1Literal();
void MutableHashIterator_QLatin1Literal_backward();

void benmark_iterator();
