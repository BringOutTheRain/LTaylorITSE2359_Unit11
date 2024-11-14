#include "OrderedDoublyLinkedList.h"

// Insert in sorted order
void OrderedDoublyLinkedList::insertOrdered(int newData) {
    DoublyNode* newNode = new DoublyNode(newData);

    if (head == nullptr) {
        // If the list is empty, both head and tail point to the new node
        head = tail = newNode;
    } else {
        DoublyNode* current = head;
        
        // Traverse to find the correct insertion point
        while (current != nullptr && current->data < newData) {
            current = current->next;
        }

        if (current == head) {
            // Insert at the head
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (current == nullptr) {
            // Insert at the tail
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            // Insert in the middle
            newNode->next = current;
            newNode->prev = current->prev;
            current->prev->next = newNode;
            current->prev = newNode;
        }
    }
}

// Print the list from head to tail
void OrderedDoublyLinkedList::printForward() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    DoublyNode* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Print the list from tail to head
void OrderedDoublyLinkedList::printBackward() {
    if (tail == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    DoublyNode* current = tail;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}
