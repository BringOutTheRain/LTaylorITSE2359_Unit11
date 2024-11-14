#ifndef ORDEREDDOUBLYLINKEDLIST_H
#define ORDEREDDOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class OrderedDoublyLinkedList {
private:
    DoublyNode* head;
    DoublyNode* tail;

public:
    OrderedDoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a new data item in ascending order
    void insertOrdered(int newData);

    // Function to print the list from head to tail
    void printForward();

    // Function to print the list from tail to head
    void printBackward();
};

#endif
