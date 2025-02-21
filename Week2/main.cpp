#include <iostream>
#include "stack.h"
using namespace std;
int main() 
{
	Stack s;
	int item = 0;

	for (int i = 0; i < 20; i++)
	{
		s.Push(i);
	}

	for (int i = 0; i < 20; i++) {
		s.Pop(item);
		cout << item << endl;
	}

	cout << "Peek: " << s.Peek() << endl;

	/*const char* str = "Hello, World!";
	char reversedStr[100];*/

	/*cout << "\nOriginal String: " << str << endl;*/

	/*s.ReverseString(str, reversedStr);

	cout << "Reversed String: " << reversedStr << endl;*/

	return 0;
}