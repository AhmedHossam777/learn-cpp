#include <iostream>
using namespace std;


class Employee {
private:
    string name;
    int code;
    float salary;

public:
    Employee *pNext, *pPrev;


    Employee() {
        code = 0;
        salary = 0;
        name = "no name";
        pNext = nullptr;
    }

    Employee(int s, int c, string n) {
        code = c;
        salary = s;
        name = n;
        pPrev = nullptr;
        pNext = nullptr;
        pPrev = nullptr;
    }

    int getCode() {
        return this->code;
    }

    void printEmp() {
        cout << "code: " << code << endl;
        cout << "salary: " << salary << endl;
        cout << "name: " << name << endl;
    }
};


class LinkedList {
protected:
    Employee *pStart, *pEnd, *pNext, *pPrev;

public:
    LinkedList() {
        pStart = pEnd = nullptr;
    }

    Employee *getStart() {
        return this->pStart;
    }

    Employee *setStart(Employee *_pStart) {
        pStart = _pStart;
    }

    Employee *getEnd() {
        return this->pEnd;
    }

    Employee *getPrev() {
        return this->pPrev;
    }

    Employee *getNext() {
        return this->pNext;
    }

    Employee *getlast() {
        Employee *emp;
        while (emp->pNext) {
            emp = emp->pNext;
        }
        return emp;
    }

    void addEmp(Employee *pItem) {
        if (isEmpty()) {
            pPrev = pNext = nullptr;
            pStart = pEnd = pItem;
        } else {
            pEnd->pNext = pItem;
            pItem->pPrev = pEnd;
            pItem->pNext = nullptr;
            pEnd = pItem;
        }
    }

    void insertEmp(Employee *pItem, int code) {
        Employee *insterAfterEmp = search(code);
        pItem->pPrev = insterAfterEmp;
        pItem->pNext = insterAfterEmp->pNext;

        if (pItem->pNext == nullptr) {
            pEnd = pItem;
        }

        insterAfterEmp->pNext = pItem;
    }

    void print() {
        Employee *pItem;
        pItem = pStart;
        while (pItem) {
            pItem->printEmp();
            pItem = pItem->pNext;
        }
    }

    Employee *search(int code) {
        Employee *pItem = nullptr;
        pItem = pStart;
        while (pItem) {
            if (pItem->getCode() == code) {
                return pItem;
            }
            pItem = pItem->pNext;
        }
        return nullptr;
    }

    int isEmpty() {
        if (this->pStart == nullptr) {
            return true;
        }

        return false;
    }

    // void sort() {
    //     Employee *pItem;
    //     pItem = pStart;
    //
    //     Employee *biggerPrev = pItem->pPrev;
    //     Employee *biggerNext = pItem->pNext;
    //
    //     Employee *smallerPrev = pItem->pNext->pPrev;
    //     Employee *smallerNext = pItem->pNext->pNext;
    //
    //     Employee *smaller = pItem->pNext;
    //     while (pItem) {
    //         while (pItem) {
    //             if (pItem->getCode() > pItem->pNext->getCode()) {
    //                 pItem->pNext = smallerNext;
    //                 pItem->pPrev = smallerPrev;
    //
    //                 // pItem->pNext->pNext =
    //             }
    //             pItem = pItem->pNext;
    //         }
    //         pItem = pItem->pNext;
    //     }
    // }
};


class Stack : private LinkedList {
public:
    Stack() : LinkedList() {
    }

    void push(Employee *emp) {
        addEmp(emp);
    }

    Employee *pop() {
        if (!isEmpty()) {
            Employee* emp = pEnd;
            emp = emp->pPrev;
            emp->pNext = nullptr;
            return emp;
        }
    }

    void displayAll() {
        print();
    }

    Employee *findEmp(int code) {
        return search(code);
    }

    ~Stack() {
    }
};

int binarySearch(Employee emps[], int len, int code) {
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = (max + min) / 2;
        if (emps[mid].getCode() == code) {
            return mid;
        } else if (emps[mid].getCode() < code) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return -1;
}

int main() {
    Employee emp1(1000, 1, "ahmed hossam");
    Employee emp2(1000, 2, "ahmed hossam");
    Employee emp3(1000, 3, "ahmed hossam");
    Employee emp4(1000, 4, "ahmed hossam");
    LinkedList l1;

    Stack s1;
    s1.push(&emp1);
    s1.push(&emp2);
    s1.push(&emp3);
    s1.push(&emp4);

    cout << "stack result after push: " << endl;
    s1.displayAll();

    cout << "stack result after pop: " << endl;
    s1.pop();
    // cout << "the poped element: " << poped << endl;
    s1.displayAll();

    // l1.addEmp(&emp1);
    // l1.addEmp(&emp2);
    // l1.addEmp(&emp3);
    // l1.insertEmp(&emp4, 2);
    // l1.print();


    // l1.sort();
    // l1.print();

    // Employee employees[] = {emp1, emp2, emp3, emp4};
    // int resultIdx = binarySearch(employees, 4, 4);
    //
    // cout << "the result of binary search: " << resultIdx << endl;


    // Employee *empS = l1.search(3);
    // empS->printEmp();
    // emp.printEmp();
    return 0;
}
