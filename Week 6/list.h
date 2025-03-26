#pragma once
template<class ItemType>
class List {
protected:
	struct Node {
		ItemType info;
		struct Node* next;
	};
	typedef struct Node* NODEPTR;
	NODEPTR listptr;
public:
	List();
	~List();
	bool emptyList();
	void insertAfter(ItemType oldval, ItemType newval);
	void deleteItem(ItemType oldval);
	void push(ItemType newval);
	ItemType pop();
};