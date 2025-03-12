#include<iostream>
#include "Que2.cpp"
#include<string>

using namespace std;
int main()
{
	Que <string> q2;
	string y, rem;
	for (int i = 0; i < 10; i++) {	//Inserts 10 names in Queue q2
		cout << "Insert Item #" << i + 1 << " in Queue: ";
		getline(cin, y);
		q2.Insert(y);
	}

	cout << "\nRemoved: ";

	for (int i = 0; i < 10; i++) {
		q2.Remove(rem);				//Removes 10 items from Queue q2 and prints them
		cout << rem << ", ";
	}
}