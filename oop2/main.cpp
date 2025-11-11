#include <iostream>
using namespace std;


//! Stack : LIFO, last in first out
class Stack {
private:
    int arr[5];
    int tos; // top of stack carries index of the current place being entered
    static int counter;

public:
    friend void viewStack(Stack param);

    Stack() {
        counter++;
        this->tos = 0;
    }

    void push(int number) {
        if (tos < 5) {
            arr[tos] = number;
            tos++;
        } else {
            cout << "stack is full!!!";
        }
    }

    int pop() {
        int result = -11111;
        if (tos != 0) {
            tos--;
            result = arr[result];
            return result;
        } else {
            cout << "Stack is empty!!";
            return result;
        }
    }


    static int getCounter() {
        return counter;
    }

    ~Stack() {
        cout << endl;
        cout << "end of object" << endl;
    }
};

void viewStack(Stack param) {
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        cout << param.arr[i] << endl;
    }
}


int Stack::counter = 0;

int main() {
    Stack s1;
    for (int i = 0; i < 5; ++i) {
        s1.push(i);
    }


    cout << "counter: " << Stack::getCounter() << endl;

    viewStack(s1);

    return 0;
}
