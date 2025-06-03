#include <iostream>
#include <string>
#include "pQue.cpp"

using namespace std;

int main() {
    PQue<string> pq;

    pq.Insert("Low Priority Task", 1);
    pq.Insert("High Priority Task", 5);
    pq.Insert("Medium Priority Task", 3);

    string task;

    cout << "Removing from PQue:\n\n";
    while (!pq.IsEmpty()) {
        pq.Remove(task);
        cout << task << endl;
    }

    return 0;
}