#include "Que.h"
#include <iostream>

using namespace std;

template <class ItemType>
PQue<ItemType>::PQue() {
    front = 0;
    rear = -1;
    count = 0;
}

template <class ItemType>
int PQue<ItemType>::IsEmpty() {
    return (count == 0);
}

template <class ItemType>
int PQue<ItemType>::IsFull() {
    return (count == maxQue);
}

template <class ItemType>
void PQue<ItemType>::Insert(ItemType newItem, int p) {
    if (IsFull()) {
        cout << "\nQueue is full";
        return;
    }

    // Find the correct position to insert the new item
    int i;
    for (i = count - 1; i >= 0 && p > items[i].priority; i--) {
        items[i + 1] = items[i];  // Shift lower priority items right
    }

    // Insert new item at the found position
    items[i + 1].item = newItem;
    items[i + 1].priority = p;

    rear++;
    count++;
}

// Remove the item with the highest priority
template <class ItemType>
void PQue<ItemType>::Remove(ItemType& item) {
    if (IsEmpty()) {
        cout << "\nQueue is empty";
        return;
    }

    item = items[front].item;

    // Shift all items left
    for (int i = 0; i < count - 1; i++) {
        items[i] = items[i + 1];
    }

    rear--;
    count--;
}