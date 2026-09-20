#include <iostream>
using namespace std;

// Stack using array.
// Time Complexity:
// Push: O(1)
// Pop: O(1)
// Peek: O(1)
// Search: O(n)

class Stack {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow.\n";
            return;
        }

        arr[++top] = value;
        cout << "Value pushed.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow.\n";
            return;
        }

        cout << "Removed: " << arr[top--] << "\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Top element: " << arr[top] << "\n";
    }

    void search(int value) {
        for (int i = top; i >= 0; --i) {
            if (arr[i] == value) {
                cout << "Value found at stack position " << (i + 1) << ".\n";
                return;
            }
        }

        cout << "Value not found.\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\n--- Stack ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Search\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.peek();
                break;

            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                stack.search(value);
                break;

            case 5:
                stack.display();
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
