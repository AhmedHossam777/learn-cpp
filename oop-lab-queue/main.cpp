#include <iostream>
using namespace std;

// class Queue {
// private:
//     int size;
//     int head;
//     int tail;
//     int *arr;
//
// public:
//     Queue(int _size) {
//         head = 0;
//         tail = 0;
//         this->size = _size;
//         arr = new int[size];
//     }
//
//     void enqueue(int value) {
//         arr[tail] = value;
//         tail++;
//     }
//
//     int dequeue() {
//         int value = arr[head];
//
//         for (int i = head; i < tail-1; ++i) {
//             arr[i] = arr[i + 1];
//         }
//
//         tail--;
//
//         return value;
//     }
//
//
//     void print() {
//         for (int i = 0; i < tail; ++i) {
//             cout << arr[i] << ",";
//         }
//         cout << endl;
//     }
//
//     ~Queue() {
//         delete [] arr;
//     }
// };


class Queue {
private:
    int size;
    int head;
    int tail;
    int *arr;

public:
    Queue(int _size) {
        head = 0;
        tail = 0;
        this->size = _size;
        arr = new int[size];
    }

    void enqueue(int value) {
        arr[tail] = value;
        if () {

        }
        tail++;
    }

    int dequeue() {
        int temp = arr[head];
        arr[head] = -1;
        return temp;
    }


    void print() {
        for (int i = 0; i < tail; ++i) {
            cout << arr[i] << ",";
        }
        cout << endl;
    }

    ~Queue() {
        delete [] arr;
    }
};

int main() {
    Queue q1(5);

    // q1.enqueue(5);
    // q1.enqueue(7);
    // q1.enqueue(2);
    // q1.enqueue(2);
    // q1.enqueue(2);
    //
    // q1.print();
    // cout << endl;
    // q1.dequeue();

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    q1.print();

    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    q1.print();


    return 0;
}
