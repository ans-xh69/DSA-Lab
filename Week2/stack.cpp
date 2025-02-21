#include<iostream>
#include<stdlib.h>
#include"stack.h"

using namespace std;

Stack::Stack() {
	top = -1;
}
int Stack::IsEmpty() const
{
	return(top == -1);
}
int Stack::isFull() const {
	return(top == MAX_ITEMS - 1);
}
void Stack::Push(ItemType newItem)
{
	if (isFull())
	{
		cout << "Stack Overflow\n";
		exit(1);
	}
	top++;
	items[top] = newItem;
}

void Stack::Pop(ItemType& item)
{
	if (IsEmpty())
	{
		cout << "\nStack Underflow!\n";
		exit(1);
	}
	item = items[top];
	top--;
}

ItemType Stack::Peek()const {
	if (IsEmpty()) 
	{
		cout << "\nStack Underflow! No Item to Peek.\n";
		exit(1);
	}
	return items[top];
}

//void Stack::ReverseString(const char* str, char* reversedStr) {
//	int i = 0;
//	while (str[i] != '\0') {
//		Push(str[i]);
//		i++;
//	}
//
//	int j = 0;
//	while (!IsEmpty()) {
//		Pop(reversedStr[j]);
//		j++;
//	}
//	reversedStr[j] = '\0';
//}