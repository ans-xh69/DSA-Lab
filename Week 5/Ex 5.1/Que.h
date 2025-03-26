#pragma once
#define maxQue 100

template <class ItemType>
class PQue
{
private:
	struct QueueItem {
		ItemType item;
		int priority;
	};

	QueueItem items[maxQue];
	int front, rear, count;

public:
	PQue();
	int IsEmpty();
	int IsFull();
	void Insert(ItemType newItem, int p);
	void Remove(ItemType& item);
};