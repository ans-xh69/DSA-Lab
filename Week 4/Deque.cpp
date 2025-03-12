#include <iostream>
#include "Deque.h"

using namespace std;

DeQue::DeQue() {
    front = -1;
    rear = -1;
    count = 0;
}

int DeQue::IsEmpty() {
    return count == 0;
}

int DeQue::IsFull() {
    return count == maxQue;
}

void DeQue::insertRight(ItemType newItem) {
    if (IsFull()) {
        cout << "\nOverflow!";
        return;
    }

    if (IsEmpty()) {  // First item
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % maxQue;  // Circular increment
    }

    items[rear] = newItem;
    ++count;
}

void DeQue::insertLeft(ItemType newItem) {
    if (IsFull()) {
        cout << "\nOverflow!";
        return;
    }

    if (IsEmpty()) {  // First item
        front = rear = 0;
    }
    else {
        front = (front - 1 + maxQue) % maxQue;  // Circular decrement
    }

    items[front] = newItem;
    ++count;
}

void DeQue::removeRight(ItemType& item) {
    if (IsEmpty()) {
        cout << "\nDeque Empty (Underflow)!";
        return;
    }

    item = items[rear];
    --count;

    if (count == 0) {  // Last item removed
        front = rear = -1;
    }
    else {
        rear = (rear - 1 + maxQue) % maxQue;  // Circular decrement
    }
}

void DeQue::removeLeft(ItemType& item) {
    if (IsEmpty()) {
        cout << "\nDeque Empty (Underflow)!";
        return;
    }

    item = items[front];
    --count;

    if (count == 0) {  // Last item removed
        front = rear = -1;
    }
    else {
        front = (front + 1) % maxQue;  // Circular increment
    }
}