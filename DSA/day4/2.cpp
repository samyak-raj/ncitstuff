//circular queue
#include <iostream>
using namespace std;
int max_size = 5;

void enqueue(int q[], int &rear, int &front, int item) {
    if((rear + 1) % max_size == front) {
        cout << "Queue is full" << endl;
        return;
    }

    if (rear == -1 && front == -1) {
        front++;
    }

    rear = (rear + 1) % max_size;
    q[rear] = item;
} 

int dequeue(int q[], int &rear, int &front) {
    if (rear == -1 && front == -1) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int item = q[front];
    if (rear == front) {
        rear = -1;
        front = -1;
    } else {
        front = (front + 1) % max_size;
    }
    return item;
}

void display(int q[], int rear, int front) {
    if(front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue contents: ";
    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % max_size;
    }
    cout << endl;
}

int main() {
    int q[max_size];
    int choice;
    int rear = -1, front = -1;  
    int item;

    while(1) {
        cout << endl << "Choose: " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter a number to enqueue: " << endl;
                cin >> item;
                enqueue(q, rear, front, item);
                break;
            case 2:
                cout << "Deleted item: " << dequeue(q, rear, front) << endl;
                break;
            case 3:
                display(q, rear, front);
                break;
            case 4:
                return 0;
        }
    }
}