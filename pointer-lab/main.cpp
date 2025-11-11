#include <iostream>
#include <string.h>
using namespace std;

// 1- pointer to integer  read & write
// int main() {
//     int x = 0;
//     int *ptr = &x;
//     cout << "enter integer: ";
//     cin >> *ptr;
//
//     cout << *ptr;
//     return 0;
// }

////////////////////////////////////////////////////////////////////
//2- pointer to array  read and write   3 ways

// int main() {
//     int arr[5];
//     int *ptr = arr;
//
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "enter the " << i << " number: ";
//     //     cin >> ptr[i];
//     // }
//     //
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "the " << i << " index: " << ptr[i] << endl;
//     // }
//
//     // the second
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "enter the " << i << " number: ";
//     //     cin >> *(ptr +i);
//     // }
//     //
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "the " << i << " index: " << *(ptr +i) << endl;
//     // }
//     //
//
//     // the third
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "enter the " << i << " number: ";
//     //     cout << "pointer of index " << i << "= " << ptr << endl;
//     //     cin >> *ptr;
//     //     ptr++;
//     // }
//     //
//     // ptr = arr;
//     //
//     // for (int i = 0; i < 5; ++i) {
//     //     cout << "the " << i << " index: " << *ptr << endl;
//     //     ptr++;
//     // }
//
//     return 0;
// }


////////////////////////////////////////////////////////////////////
// //3- pointer to pointer of integer Write ONLY
// int main() {
//     int x = 0;
//     int *ptr = &x;
//     int **ptrOfPtr = &ptr;
//
//
//     cout << "enter an integer: ";
//     cin >> **ptrOfPtr;
//     cout << "you entered : " << x << " value" << endl;
//     cout << "you entered : " << **ptrOfPtr << " reference";
//
//     return 0;
// }


////////////////////////////////////////////////////////////////////
//4- pass by value/address    swap

// void swap(int *left,int *right) {
//     int temp = *left;
//     *left = *right;
//     *right = temp;
// }
//
// int main() {
//     int x = 10;
//     int y = 20;
//     cout << "before swapping: "<<endl;
//     cout << "x: " << x << endl;
//     cout << "y: " << y << endl;
//
//     swap(x,y);
//     cout << "after swapping: "<<endl;
//     cout << "x: " << x << endl;
//     cout << "y: " << y << endl;
//
//     return 0;
// }

////////////////////////////////////////////////////////////////////
//5- pass array as input param []   ,pass pointer
// void enterArr(int *ptr, int len) {
//     for (int i = 0; i < len; ++i) {
//         cin >> ptr[i];
//     }
// }
//
// void printArr(int *ptr, int len) {
//     for (int i = 0; i < len; ++i) {
//         cout << "element of index " << i << "= " << ptr[i] << endl;
//     }
// }
//
//
// int main() {
//     int len = 0;
//     cout << "enter the length of the array: ";
//     cin >> len;
//     int arr[len];
//     int *ptr = arr;
//     cout << "enter the arr elements ";
//     enterArr(ptr, len);
//
//     cout << endl;
//     printArr(ptr, len);
//
//     return 0;
// }

////////////////////////////////////////////////////////////////////
//6- return [] as return type[not supported][compiler error]
//and return pointer as a return type
int* func (int x) {
    return &x;
}

////////////////////////////////////////////////////////////////////
//7- pointer to struct of employee
// struct Employee {
//     int id;
//     int age;
//     float salary;
// };
//
// int main() {
//     Employee emp;
//     Employee *empPtr = &emp;
//
//     empPtr->id = 1;
//     empPtr->salary = 3000;
//     empPtr->age = 23;
//
//     cout << "id " << (*empPtr).id << endl;
//     cout << "salary " << (*empPtr).salary << endl;
//     cout << "age " << (*empPtr).age << endl;
//     return 0;
// }

//8- fname, lname -> fullname

// int main() {
//     char fname[10];
//     char lname[10];
//     char fullname[10];
//
//
//     cout << "enter your fname: ";
//     cin >> fname;
//
//     cout << "enter your lname: ";
//     cin >> lname;
//
//     strcpy(fullname, fname);
//     // cout << fullname;
//     strcat(fullname, " ");
//     strcat(fullname, lname);
//
//     cout << "fullname: " << fullname;
//     return 0;
// }