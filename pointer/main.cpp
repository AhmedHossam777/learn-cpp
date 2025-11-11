#include <cstring>
#include <iostream>
using namespace std;

//* pointer : variable carries address of another variable in memory

//! declare pointer : the same type of the variable that we wanna store it's address with an (*)
//? datatype *ptr;

struct Employee {
    int id;
    char name[20];
    int age;
};


void swap(int left, int right) {
    int temp = left;
    left = right;
    right = temp;
}

void printArr(int *param, int _size) {
    for (int i = 0; i < _size; ++i) {
        cout << param[i] << endl;
    }
}

int main() {
    // pointer to integer;
    int x = 10;
    int *ptr = &x;

    cout << "address of x: " << ptr << endl;

    //? pointer to int again using (*)
    cout << "the value of x: " << *ptr << endl;

    // we can access the the value of the variable using it's address or pointer
    *ptr = 100;
    cout << x << endl; // 100

    // to get the address of the pointer that contains an address, this will be address different from the address of x

    cout << "address of the pointer itself: " << &ptr << endl;

    // cout << *x; // compile error


    // ? size of pointer : the size of the pointer doesn't differ from datatype to another as it always store address (8 byte)
    int *intPtr;
    cout << sizeof(intPtr) << " byte" << endl; // 8


    // this will make the yptr points to an address that is after the address of y by 4 bytes (the size of integer)
    int y = 10;
    int *yPtr = &y;
    yPtr++;

    // this will make the dPtr points to an address that is after the address of y by 8 bytes (the size of double)
    double z = 20;
    double *dPtr = &z;
    dPtr++;


    //! dptr ++ != dptr+1

    //! General purpose pointer : void pointer, used for dynamic allocation => void *ptr, void pointer cannot be increased (++)


    //* pointer to int array
    int arr[5];
    int *arrPtr;

    ptr = arr;
    cout << ptr; // the address of the first element of the arrays


    // fill array with pointers
    //? when pointer point to array it at like an array [indexer]
    arrPtr = arr;
    int len = sizeof(arr) / sizeof(int);
    cout << "arr -> ptr" << endl;
    for (int i = 0; i < len; i++) {
        arrPtr[i] = i;
        cout << arrPtr[i] << endl;
    }

    //* pointer to char of character
    char name[15];
    char *cPtr = name;

    // we wanna store ali
    cPtr[0] = 'a';
    cPtr[1] = 'l';
    cPtr[2] = 'i';
    cPtr[3] = '\0';
    cout << cPtr << endl;

    //////////////////////////////////////////////////////////////////////////////////////
    //* pointer to pointer to value

    int num = 10;
    int *nPtr = &num;
    int **ptrToPtr = &nPtr;

    cout << num << endl;
    cout << &num << endl;
    cout << nPtr << endl;
    cout << &nPtr << endl;
    cout << *nPtr << endl;
    cout << ptrToPtr << endl;
    cout << &ptrToPtr << endl;
    cout << *ptrToPtr << endl;
    cout << **ptrToPtr << endl;

    //////////////////////////////////////////////////////////////////////////////////////
    //* pointer to struct
    cout << "pointer to struct" << endl;
    Employee emp1;
    Employee *empPtr;

    empPtr = &emp1;
    cout << empPtr << endl;
    (*empPtr).id = 1;
    (*empPtr).age = 23;
    strcpy((*empPtr).name, "ahmed");

    cout << (*empPtr).name << endl;
    cout << (*empPtr).id << endl;
    cout << (*empPtr).age << endl;

    //////////////////////////////////////////////////////////////////////////////////////
    //! pass array to function : see the function above
    int arrss[2] = {1, 2};
    printArr(arrss, 2);

    return 0;
}
