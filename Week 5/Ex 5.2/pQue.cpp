#include "Que.h"
#include <iostream>

using namespace std; 

template <class ItemType>
PQue<ItemType>::PQue() {
    for (int i = 0; i < N; i++) {
        front[i] = 0;
        rear[i] = -1;
        count[i] = 0;
    }
}

template <class ItemType>
int PQue<ItemType>::IsEmpty(int p) {
    return (count[p] == 0);
}

template <class ItemType>
int PQue<ItemType>::IsFull(int p) {
    return (count[p] == maxQue);
}

template <class ItemType>
void PQue<ItemType>::Insert(ItemType newItem, int p) {
    if (p < 0 || p >= N || IsFull(p))
    {
        cout << "Invalid Priority or Queue is Full!\n";
        return;
    }

    rear[p] = (rear[p] + 1) % maxQue;
    items[p][rear[p]].item = newItem;
    count[p]++;
}

template <class ItemType>
bool PQue<ItemType>::Remove(ItemType& item) {
    for (int i = N - 1; i >= 0; i--) {  // Start from highest priority
        if (!IsEmpty(i)) {
            item = items[i][front[i]].item;
            front[i] = (front[i] + 1) % maxQue;
            count[i]--;
            return true;
        }
    }
    return false;
}