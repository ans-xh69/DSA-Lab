#pragma once
template <class ItemType>
class Que {
	int front, rear, maxQue, count;
	ItemType* items;
public:
	Que();
	Que(int max);
	~Que();
	int IsFull() const;
	int IsEmpty() const;
	void Insert(ItemType newItem);
	void Remove(ItemType& item);
};