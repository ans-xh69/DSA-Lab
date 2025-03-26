#include <iostream>
#include <string>
#include "pQue.cpp"

using namespace std; // Using standard namespace

int main() {
    PQue <string> pq;

    // Insert tasks with different priority levels
    pq.Insert("Priority 1 Task", 1);
    pq.Insert("Priority 4 Task", 4);
    pq.Insert("Priority 2 Task", 2);
    pq.Insert("Priority 3 Task", 3);
    pq.Insert("Priority 4 Task 2", 4); // Highest priority level available

    string task;
    cout << "Removing:\n\n";

    while (pq.Remove(task)) {
        cout << task << endl;
    }

    cout << "\nQueue is empty.";

    return 0;
}