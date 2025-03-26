Linked List Implementation in C++
This project implements a templated singly linked list in C++ with the following functions:

Functions Implemented
push(newval)

Adds an element to the front of the list.

Works like "pushing" onto a stack.

pop()

Removes and returns the first element from the list.

If the list is empty, an error message is displayed.

insertAfter(oldval, newval)

Finds oldval in the list and inserts newval after it.

If oldval is not found, an error is displayed.

deleteItem(oldval)

Finds and removes oldval from the list.

If oldval is not found, an error is displayed.

emptyList()

Returns true if the list is empty, otherwise false.

Using the Linked List to Reverse a String
We used the push and pop functions to reverse a string:

Push each character of the string onto the linked list.

Pop each character from the list to retrieve them in reverse order.

Since the list behaves like a stack (LIFO - Last In, First Out), popping elements retrieves them in reverse order.

Key Learnings
Implementing a singly linked list in C++.

Using a templated class to handle different data types.

Understanding stack behavior (LIFO).

Performing string reversal using a linked list.

This project demonstrates how linked lists can be used for practical applications like reversing a string efficiently.