#include <iostream>
using namespace std;

// Singly Linked List
// Time Complexity:
// Insert at beginning: O(1)
// Insert at end: O(n)
// Search: O(n)
// Delete: O(n)

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    bool search(int value) {
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }

        return false;
    }

    bool remove(int value) {
        if (head == nullptr) {
            return false;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node* current = head;

        while (current->next != nullptr &&
               current->next->data != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            return false;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;

        return true;
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;

        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    ~LinkedList() {
        Node* current = head;

        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\n--- Linked List ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insert(value);
                cout << "Value inserted.\n";
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                if (list.remove(value))
                    cout << "Value deleted.\n";
                else
                    cout << "Value not found.\n";
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (list.search(value))
                    cout << "Value found.\n";
                else
                    cout << "Value not found.\n";
                break;

            case 4:
                list.display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
