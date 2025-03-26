#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "list.h"

using namespace std;

template<class ItemType>
List<ItemType>::List() {
	listptr = 0;
}

template<class ItemType>
List<ItemType>::~List() {
	/*NODEPTR p, q;
	if (emptyList())
		exit(0);
	for (p = listptr, q = p->next; p != 0; p = q, q = p->next)
		delete p;*/
	NODEPTR p;
	while (listptr != nullptr) {
		p = listptr;
		listptr = listptr->next;
		delete p;
	}
}

template<class ItemType>
void List<ItemType>::insertAfter(ItemType oldval, ItemType newval) {
	NODEPTR p, q;
	for(p = listptr; p != 0 && p->info != oldval; p = p->next);

	if (p == 0) {
		cout << "\nERROR: Value sought is not in the list.";
		exit(1);
	}
	q = new Node;
	q->info = newval;
	q->next = p->next;
	p->next = q;
}

template<class ItemType>
bool List<ItemType>::emptyList() {
	return(listptr == 0);
}

template<class ItemType>
void List<ItemType>::push(ItemType newval) {
	NODEPTR p;
	p = new Node;
	p->info = newval;
	p->next = listptr;
	listptr = p;
}

template<class ItemType>
void List<ItemType>::deleteItem(ItemType oldval) {
	NODEPTR p, q;
	for (q = 0, p = listptr; p != 0 && p->info != oldval; q = p, p = p->next);
	if (p == 0) {
		cout << "\nERROR: Sought value is not in the list.";
		exit(1);
	}
	if (q == 0)
		listptr = p->next;
	else
		q->next = p->next;
	delete p;
}

template<class ItemType>
ItemType List<ItemType>::pop() {
	NODEPTR p;
	ItemType x;
	if (emptyList()) {
		cout << "\nERROR: The list is empty.\n";
		exit(1);
	}
	p = listptr;
	listptr = p->next;
	x = p->info;
	delete p;
	return x;
}