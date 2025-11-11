#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int tos;
    static int counter;
    int size;

public:
    friend void viewStack(Stack param);

    Stack() {
        cout << "Hello, default constructor\n";
        this->tos = 0;
        cout << "ss";

        counter++;
    }

    Stack(int _size) {
        this->tos = 0;
        cout << "Hello, paramatrized constructor\n";
        this->size = _size;
        arr = new int[size];
        counter++;
    }

    void push(int number) {
        if (!this->IsFull()) {
            arr[tos] = number;
            tos++;
        } else {
            cout << "FULL !!!\n";
        }
    }

    int pop() {
        int result = -1234;
        if (!IsEmpty()) {
            tos--;
            result = arr[tos];
        } else {
            cout << "EMPTY!!!\n";
        }
        return result;
    }


    static int getCounter() {
        return counter;
    }

    int IsFull() { return tos == size; }
    int IsEmpty() { return tos == 0; }


    Stack &operator=(const Stack &right) {
        delete[] arr;
        tos = right.tos;
        size = right.size;
        arr = new int[size];
        for (int i = 0; i < tos; i++) {
            arr[i] = right.arr[i];
        }
        return *this;
    }

    ///bonus    s1==s2
    int operator==(const Stack &right) {
        if (right.tos != this->tos) {
            return 0;
        }
        for (int i = tos - 1; i >= 0; --i) {
            if (right.arr[i] != arr[i]) {
                return 0;
            }
        }

        return 1;
    }

    Stack reverse() {
        Stack revStack(size);
        for (int i = tos - 1; i >= 0; i--) {
            revStack.push(arr[i]);
        }
        return revStack;
    }

    ///bonus    s3=s1+s2;
    Stack operator+(Stack &right) {
        int size = (tos) + (right.tos);
        Stack result(size);

        for (int i = 0; i <= tos-1; ++i) {
            result.push(arr[i]);
        }

        for (int i = 0; i <= right.tos-1; ++i) {
            result.push(right.arr[i]);
        }

        return result;
    }

    ~Stack() {
        for (int i = 0; i < size; ++i) {
            arr[i] = -1;
        }
        delete[] arr;
        cout << endl;
        cout << "goodby, desctructor" << endl;
    }

    Stack(const Stack &oldObject) {
        tos = oldObject.tos;
        this->size = oldObject.size;
        this->arr = new int[size];
        for (int i = 0; i < tos; i++) {
            this->arr[i] = oldObject.arr[i];
        }
        cout << "cpy ctor";
    }
};

void viewStack(Stack param) {
    cout << endl;
    for (int i = 0; i < param.size; ++i) {
        cout << param.arr[i] << " ";
    }
}


int Stack::counter = 0;

int main() {
    int size;
    cout << "enter the size: " << endl;
    cin >> size;
    Stack s1(size);

    for (int i = 0; i < size; ++i) {
        cout << "adding " << i << " ";
        s1.push(i);
    }

    cout << "counter: " << Stack::getCounter() << endl;

    viewStack(s1);
    viewStack(s1);

    cout << "assign" << endl;
    Stack s2(size);
    s2 = s1;
    viewStack(s2);

    int comparisonRes = s1 == s2;
    cout << "comparison result: " << comparisonRes << endl;

    Stack Sum = (s1+s2);

    cout << "sum result: "  << endl;
    viewStack(Sum);

    cout << "reverse" << endl;
    Stack reversed(size);
    reversed = s2.reverse();

    viewStack(reversed);

    return 0;
}
