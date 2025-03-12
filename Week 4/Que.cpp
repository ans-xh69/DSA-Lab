#include "Que.h"
#include<iostream>
using namespace std;

Queue::Queue()
{
	count = 0;
	front = 0;
	rear = 0;
}

int Queue::IsEmpty()
{
	return(count == 0);
}

int Queue::IsFull()
{
	return(count == maxQue);
}

void Queue::Insert(ItemType newItem)
{
	if (IsFull())
		cout << "\nOver Flow!";
	else
	{
		items[rear] = newItem;
		rear = (rear + 1) % maxQue;
		++count;
	}
}

void Queue::Remove(ItemType& item)
{
	if (IsEmpty())
		cout << "\nUnder Flow!";
	else
	{
		item = items[front];
		front = (front + 1) % maxQue;
		--count;
	}
}