#include "OrderedCircularLinkedList.h"

// Insert in sorted order
void OrderedCircularLinkedList::insertOrdered(int newData) {
    Node* newNode = new Node(newData);

    if (head == nullptr) {
        // If the list is empty, create a circular list with one node
        head = newNode;
        head->next = head; // Point to itself
    } else {
        Node* current = head;
        Node* prev = nullptr;

        // Traverse to find the correct insertion point
        do {
            if (current->data >= newData) {
                break;
            }
            prev = current;
            current = current->next;
        } while (current != head);

        // Insert the new node
        if (prev == nullptr) {
            // Insert before the head node
            newNode->next = head;
            head = newNode;
            // Find the last node to update its next pointer
            Node* temp = head;
            while (temp->next != current) {
                temp = temp->next;
            }
            temp->next = head;
        } else {
            // Insert after the prev node
            prev->next = newNode;
            newNode->next = current;
        }
    }
}

// Print the list in ascending order
void OrderedCircularLinkedList::printList() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}
