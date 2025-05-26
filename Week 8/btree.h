#pragma once
#define NUMNODES 500

typedef int ItemType;

class Btree {
public:
	Btree();
	Btree(ItemType info);
	Btree(Btree lbt, ItemType info, Btree rbt);
	bool IsEmpty();
	Btree LChild();
	ItemType Data();
	Btree RChild();
};