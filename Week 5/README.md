# Priority Queue Implementation in C++

This repository contains an implementation of a **Priority Queue** in C++ that supports **N different priority levels**. The queue processes elements based on their priority, ensuring that higher-priority elements are dequeued first.

## 🚀 Features
- Supports **multiple priority levels** (`N = 5` by default).
- Implements **circular queue logic** to optimize space usage.
- Allows **insertion** and **removal** of elements at different priority levels.
- Uses **header (`Que.h`) and implementation (`PQue.cpp`) separation** for better modularity.
- Includes a **test program (`main.cpp`)** to demonstrate functionality.

## 📌 Tasks Performed
1. **Defined the `PQue` class** in `Que.h`, including:
   - Queue structure for multiple priority levels.
   - Functions for insertion, removal, and queue status checks.
   
2. **Implemented queue operations** in `PQue.cpp`, such as:
   - `Insert(ItemType newItem, int p)`: Adds an item to a specific priority level.
   - `Remove(ItemType& item)`: Removes the highest-priority available item.
   - `IsEmpty(int p)`: Checks if a priority level is empty.
   - `IsFull(int p)`: Checks if a priority level is full.

3. **Created a test program (`main.cpp`)** to:
   - Insert elements into the queue at different priority levels.
   - Remove and display elements in priority order.