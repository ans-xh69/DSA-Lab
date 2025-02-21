#pragma once
#define MAX_ITEMS 100
typedef int ItemType;

class Stack {
public:
	Stack();
	int IsEmpty() const;
	int isFull()const;
	void Push(ItemType newItem);
	void Pop(ItemType& item);
	ItemType Peek() const;
	void ReverseString(const char* str, char* reversedStr);
private:
	int top;
	ItemType items[MAX_ITEMS];
};