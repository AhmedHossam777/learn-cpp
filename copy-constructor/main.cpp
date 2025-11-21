#include <cstring>
#include <iostream>
using namespace std;

//! copy constructor: copy constructor is a special c++ constructor in C++ that creates a new object as a copy of an existing object
//! it takes takes a reference of the same class as a parameter ex: Classname(const Classname& other)
//? notes :
//* copy constructor is automatically invoked in three main situation:
//* 1. when an object is passed by value to a function
//* 2. when an object is returned by value from a function
//* 3. when an object is initialized using another object of the same class

//? 1. Default Copy Constructor (Shallow Copy)

// class ShallowExample {
// public:
//     int value;
//     ShallowExample(int _value){
//         cout << "constructor called" << endl;
//         value = _value;
//     }
// };
//
// int main() {
//     cout << "hello, copy constructor" << endl;
//     ShallowExample obj1(90);
//     ShallowExample obj2 = obj1;
//
//     // before modification
//     cout << "obj1: " << obj1.value << endl; // obj1: 90
//     cout << "obj2: "  <<obj2.value << endl; // obj2: 90
//
//     obj2.value = 10;
//
//     // after modification
//     cout << "obj1: " << obj1.value << endl; // obj1: 90
//     cout << "obj2: "  <<obj2.value << endl; // obj2: 10
//
//
//     return 0;
// }

//? 2. User-Defined Copy Constructor (Deep Copy)
// class DeepExample {
// public:
//     string name;
//     int id;
//
//     // constructor
//     DeepExample(string _name, int _id) {
//         name = _name;
//         id = _id;
//     }
//
//     // copy constructor (deep copy)
//     DeepExample(const DeepExample &obj) {
//         id = obj.id;
//         name = obj.name;
//         cout << "copy constructor called for: " << name << endl;
//     }
//
//     // destructor
//     ~DeepExample() {
//         cout << "Destructor called for " << name << endl;
//     }
//
//     void display() {
//         cout << "id: " << this->id << endl;
//         cout << "name: " << this->name << endl;
//     }
//
//     void changeName(string _name) {
//         cout << "changing name of: " << name << " to: " << _name << endl;
//         name = _name;
//     }
// };
//
// int main() {
//     DeepExample obj1("ahmed", 1);
//     DeepExample obj2 = obj1;
//
//     obj1.display();
//     obj2.display();
//
//
//     obj2.changeName("the dod");
//     cout << "after changing of the deep copy" << endl;
//     obj1.display(); // still ahmed
//     obj2.display(); // the dod
//     return 0;
// }


//! The Problem with Shallow Copy
class ProblematicClass {
private:
    int *data;

public:
    ProblematicClass(int value) {
        data = new int; // allocate memory in the heap
        *data = value;
        cout << "Constructor: allocated memory at " << data << endl;
    }
    ~ProblematicClass() {
        cout << "destructor deleting allocated at : " << data <<endl;
        delete data;
    }

    void setData(int _data) {
        *data = _data;
    }
    int getValue() {
        return *data;
    }
    void print() {
        cout << "the data: " << *data << endl;
    }

};

int main() {
    ProblematicClass obj1(90);
    obj1.print(); // 90

    ProblematicClass obj2 = obj1;    // create a shallow copy both points to the same memory
    obj2.print(); // 90

    obj2.setData(10);
    obj1.print(); // 10
    obj2.print(); // 10

    return 0;
}
//* Problems with shallow copy:
//* - Both objects point to the same memory address
//* - When one object is destroyed, it deletes the memory
//* - The other object's pointer becomes a dangling pointer
//* - Results in double deletion or undefined behavior

