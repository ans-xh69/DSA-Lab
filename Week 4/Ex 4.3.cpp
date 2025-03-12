#include <iostream>
#include "Deque.h"

using namespace std;

int main() {
   DeQue q1;
   int x, rem;

   for (int i = 0; i < 3; i++) {  // Inserts items on left in DeQue q1
       cout << "Insert Item #" << i + 1 << " in DeQue from Left: ";
       cin >> x;
       q1.insertLeft(x);
   }

   for (int i = 0; i < 3; i++) {  // Inserts items on right in DeQue q1
       cout << "Insert Item #" << i + 1 << " in DeQue from Right: ";
       cin >> x;
       q1.insertRight(x);
   }

   cout << "\nRemoved from Left: ";
   for (int i = 0; i < 3; i++) {
       q1.removeLeft(rem);
       cout << rem << " ";
   }

   cout << "\nRemoved from Right: ";
   for (int i = 0; i < 3; i++) {
       q1.removeRight(rem);
       cout << rem << " ";
   }

   return 0;
}