#include <iostream>
using namespace std;

// Queue using circular array.
// Time Complexity:
// Enqueue: O(1)
// Dequeue: O(1)
// Front: O(1)
// Search: O(n)

class Queue {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int frontIndex;
    int rearIndex;
    int count;

public:
    Queue() {
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX_SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow.\n";
            return;
        }

        rearIndex = (rearIndex + 1) % MAX_SIZE;
        arr[rearIndex] = value;
        count++;

        cout << "Value inserted into queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow.\n";
            return;
        }

        cout << "Removed: " << arr[frontIndex] << "\n";
        frontIndex = (frontIndex + 1) % MAX_SIZE;
        count--;
    }

    void front() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Front element: " << arr[frontIndex] << "\n";
    }

    void search(int value) {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        for (int i = 0; i < count; ++i) {
            int index = (frontIndex + i) % MAX_SIZE;

            if (arr[index] == value) {
                cout << "Value found in queue.\n";
                return;
            }
        }

        cout << "Value not found.\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue (front to rear): ";

        for (int i = 0; i < count; ++i) {
            int index = (frontIndex + i) % MAX_SIZE;
            cout << arr[index] << " ";
        }

        cout << "\n";
    }
};

int main() {
    Queue queue;
    int choice, value;

    do {
        cout << "\n--- Queue ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Search\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                queue.enqueue(value);
                break;

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.front();
                break;

            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                queue.search(value);
                break;

            case 5:
                queue.display();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
