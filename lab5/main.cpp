#include <iostream>
using namespace std;

///1- try dynamic allocation
// for pointer to integer read and write  2ways
// int main() {
//     int x;
//     int *ptr = new int;
//     int *ptr2 = new int[1];
//
//     cout << "enter a number: ";
//     cin >> *ptr2;
//
//     cout << "you entered: " << *ptr2 << endl;
//
//     return 0;
// }

///2- try dynamic allocation for Array
// of pointers to integers read and write
// int main() {
//     int size;
//     cout << "enter the size: ";
//     cin >> size;
//     int *ptr = new int[size];
//
//     for (int i = 0; i < size; ++i) {
//         cin >> ptr[i];
//     }
//
//     cout << "you entered: " << endl;
//     for (int i = 0; i < size; ++i) {
//         cout << ptr[i] << " ";
//     }
//     return 0;
// }

///3- int **ptrArr;
int main() {
    int col, row;
    cout << "enter the number of rows: ";
    cin >> row;

    int **ptrArr;
    ptrArr = new int *[row];

    cout << "enter the number of col: ";
    cin >> col;

    for (int i = 0; i < row; ++i) {
        ptrArr[i] = new int[col];
    }

    cout << "your array is: " << row << "x" << col << endl;


    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "enter the number of: " << j << "x" << i << endl;
            cin >> ptrArr[i][j];
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "the number of: " << j << "x" << i << " is: " << ptrArr[i][j] << endl;
        }
    }


    return 0;
}
