#pragma once
#define maxQue 100
typedef int ItemType;
class DeQue
{
	ItemType items[maxQue];
	int front, rear, count;
public:
	DeQue();
	int IsEmpty();
	int IsFull();
	void insertLeft(ItemType newItem);
	void insertRight(ItemType newItem);
	void removeLeft(ItemType& item);
	void removeRight(ItemType& item);
};