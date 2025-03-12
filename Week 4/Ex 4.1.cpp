#include<iostream>
#include "Que.h"

using namespace std;

int main()
{
	Queue q1;
	int x, rem;

	for (int i = 0; i < 10; i++) {	//Inserts 10 items in Queue q1
		cout << "Insert Item #" << i + 1 << " in Queue: ";
		cin >> x;
		q1.Insert(x);
	}

	cout << "\nRemoved: ";

	for (int i = 0; i < 10; i++) {
		q1.Remove(rem);				//Removes 10 items from Queue q1 and prints them
		cout << rem << " ";
	}

	if (q1.IsEmpty())
	{
		cout << "\nQueue Empty!";
	}
	else
		cout << "\nNot Empty\n";
}