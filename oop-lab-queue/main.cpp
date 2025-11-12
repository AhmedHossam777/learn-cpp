using namespace std;
#include <iostream>

class SQueue {
private:
    int rear;
    int size;
    int *arr;

public:
    SQueue() {
        rear = 0;
        size = 5;
        arr = new int[size];

        cout << "Default ctor" << endl;
    }

    SQueue(int _size) {
        rear = 0;
        size = _size;
        arr = new int[size];
        cout << "paramterized ctor" << endl;
    }

    ~SQueue() {
        cout << "dest has been called" << endl;
    }

    void Enqueue(int value) {
        if (rear < size) {
            arr[rear] = value;
            rear++;
        } else {
            cout << "The queue is full" << endl;
        }
    }

    int Dequeue() {
        if (rear == 0) {
            cout << "The queue is empty!" << endl;
            return -1;
        }

        int result = arr[0];

        for (int i = 0; i < rear - 1; i++) {
            arr[i] = arr[i + 1];
        }

        rear--;
        arr[rear] = 0;

        return result;
    }


    friend void ViewSQueue(SQueue param);
};

void ViewSQueue(SQueue param) {
    for (int i = 0; i < param.rear; i++) {
        cout << param.arr[i] << " ";
    }
    cout << endl;
}


int main() {
    SQueue q1(10);

    for (int i = 1; i <= 10; i++) {
        q1.Enqueue(i);
    }

    cout << q1.Dequeue() << endl;
    cout << q1.Dequeue() << endl;
    cout << q1.Dequeue() << endl;

    ViewSQueue(q1);

    return 0;
}


class CQueue {
private:
    int front;
    int rear;
    int size;
    int *arr;

public:
    CQueue() {
        front = rear = -1;
        size = 5;
        arr = new int[size];

        cout << "Default ctor" << endl;
    }

    CQueue(int _size) {
        front = rear = -1;
        size = _size;
        arr = new int[size];

        cout << "Parameterized ctor" << endl;
    }

    ~CQueue() {
        cout << "Dest has been called" << endl;
    }

    void Enqueue(int value) {
        if (!isFull()) {
            if (front == -1) {
                front = 0;
            }

            rear = (rear + 1) % size;
            arr[rear] = value;
        } else {
            cout << "The Queue is full" << endl;
        }
    }

    int Dequeue() {
        if (isEmpty()) {
            cout << "The stack is empty!" << endl;
            return -1;
        }

        int result = arr[0];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return result;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1 == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    friend void ViewCQueue(CQueue &param);
};


void ViewCQueue(CQueue &param) {
    if (param.isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    int i = param.front;
    while (true) {
        cout << param.arr[i];
        if (i == param.rear)
            break;
        cout << " ";
        i = (i + 1) % param.size;
    }

    cout << endl;
}

// int main(){
//     CQueue q1(10);
//
//     for(int i = 1; i <= 10; i++){
//         q1.Enqueue(i);
//     }
//
//
//     cout << q1.Dequeue() << endl;
//
//     q1.Enqueue(11);
//
//     ViewCQueue(q1);
//     return 0;
// }
