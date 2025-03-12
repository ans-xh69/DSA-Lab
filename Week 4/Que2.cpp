#include<iostream>
#include "Que2.h"

using namespace std;

template<class ItemType>
Que<ItemType>::Que()
{
	maxQue = 501;
	front = 0;
	rear = 0;
	count = 0;
	items = new ItemType[maxQue];
}

template<class ItemType>
Que<ItemType>::Que(int max)
{
	maxQue = max + 1;
	front = 0;	rear = 0;	count = 0;
	items = new ItemType[maxQue];
}

template<class ItemType>
Que<ItemType>::~Que()
{
	delete[] items;
}

template<class ItemType>
int Que<ItemType>::IsEmpty() const
{
	return(count == 0);
}

template<class ItemType>
int Que<ItemType>::IsFull()const {
	return(count == maxQue);
}

template<class ItemType>
void Que<ItemType>::Insert(ItemType newItem)
{
	if (IsFull())	cout << "\nOver Flow!";
	else {
		items[rear] = newItem;
		rear = (rear + 1) % maxQue;
		++count;
	}
}

template<class ItemType>
void Que<ItemType>::Remove(ItemType& item) {
	if (IsEmpty())	cout << "\nUnder Flow!";
	else {
		item = items[front];
		front = (front + 1) % maxQue;
		--count;
	}
}