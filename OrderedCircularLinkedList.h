#ifndef ORDEREDCIRCULARLINKEDLIST_H
#define ORDEREDCIRCULARLINKEDLIST_H

#include <iostream>
using namespace std;

// Node structure for Circular Linked List
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class OrderedCircularLinkedList {
private:
    Node* head;

public:
    OrderedCircularLinkedList() : head(nullptr) {}

    // Function to insert a new data item in ascending order
    void insertOrdered(int newData);

    // Function to print the circular list
    void printList();
};

#endif
