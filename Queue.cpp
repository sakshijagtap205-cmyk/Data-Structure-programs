#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if (rear == 4)
            cout << "Queue Full\n";
        else {
            if (front == -1)
                front = 0;
            arr[++rear] = x;
        }
    }

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue Elements: ";
    q.display();

    return 0;
}
