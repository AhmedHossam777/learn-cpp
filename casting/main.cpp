#include <iostream>
using namespace std;


//! array of pointers
// int main() {
//     int a = 1, b = 2, c = 3, d = 4;
//     int *ptrArr[4]; // array of pointers
//
//     // we wanna put address of a into the first element of the array
//     // ptrArr = a; //F
//     // ptrArr = &a; //F
//     //ptrArr[0] = a // F
//     // ptrArr[0] = &a //T
//     // *ptrArr = &a //T
//
//     int arr[4] = {1, 2, 3, 4};
//     // ptrArr = arr //F
//     // ptrArr[0] = arr //T
//     // ptrArr[0] = &arr //T
//     // ptrArr[0] = &arr[0] //T
//     // *ptrArr[0] = arr //T
//
//
//     return 0;
// }

//! CASTING: casting is state that move from datatype to another
//* converting value of datatype to another datatype
//? in the new version of c++ this is done automatically (implicit)
int main() {
    // int x = 6;
    // double y = 1.3;

    // Casting, implicit casting
    // y = x;
    // cout << y ; // 6

    // save casting
    // y = double(x);
    // cout << y ; // 6

    // Casting, implicit casting
    // unsave casing: in unsave casting, some range of value y that x cannot contain
    // x = y; // 1;

    // Casting, explicit casting, save casting (recommended)
    // x = int(y); // 1

    //? why there was save at first and not save in the other example ?
    //* that's because the range of the double is bigger that the range of integer

    // cout << x;


    int x = 10;
    void *ptr;
    ptr = &x;

    cout << *((int *) ptr);

    return 0;
}
