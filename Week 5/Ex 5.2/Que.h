#pragma once
#define maxQue 100    // Maximum items in the queue
#define N 5           // Number of priority levels

template <class ItemType>
class PQue
{
private:
    struct QueueItem {
        ItemType item;
    };

    QueueItem items[N][maxQue]; // Separate queues for each priority level
    int front[N], rear[N], count[N]; // Tracking front, rear, and count for each priority

public:
    PQue();
    int IsEmpty(int p);
    int IsFull(int p);
    void Insert(ItemType newItem, int p);
    bool Remove(ItemType& item);
};