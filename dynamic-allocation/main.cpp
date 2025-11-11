#include <iostream>
using namespace std;

int main() {
    // allocate specific values in runtime based on specific size
    ///? any dynamic -> stored in heap
    ///? keywod -> new
    ///! new : return the address of the first element in the heap as pointer to void
    ///?  poiter to int = new int[5]; -> here there is implicit casting from void to integer


    // syntax
    // allocate five integer
    //* new int[5]; : make dynamic allocation for 5 element in the heap

    // int*ptr = new int[5];
    // cout << ptr;
    //
    // double *dPtr = new double[5];
    // cout << dPtr;

    // int size = 5;
    //
    // int *ptr = new int[size];
    //
    // // sol1
    // for (int i = 0; i < size; ++i) {
    //     *(ptr + i) = (i + 1) * 10;
    // }
    //
    // for (int i = 0; i < size; ++i) {
    //     cout << *(ptr + i) << " "; // 10 20 30 40 50
    // }
    //
    // cout << endl;
    // ////////////////////////////////////////////////////////////////
    // // sol2
    //
    // for (int i = 0; i < size; ++i) {
    //     ptr[i] = (i + 1) * 10;
    // }
    //
    // delete[] ptr; // delete remove the protection of the allocated memory of what we delete,
    // for (int i = 0; i < size; ++i) {
    //     cout << ptr[i] << " "; // it can be the old data, rubbish or runtime if the allocated memory was written in it
    // }

    // delete[] ptr -> remove the allocated array of ptr
    // delete ptr -> remove the first element of the arr


    // int * ptrArr[3];
    // ptrArr[0] = new int[4];
    // ptrArr[1] = new int[4];
    // ptrArr[2] = new int[4];
    // //? from the previous arr , the ptrArr is new ptrArr[3][4]
    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 4; ++j) {
    //         ptrArr[i][j];
    //     }
    // }
    // //? to delete :
    // //! Wrongggg : delete []ptrArr;
    // //* the following is the true
    // delete [] ptrArr[0];
    // delete [] ptrArr[1];
    // delete [] ptrArr[2];
    //
    //
    // // Note :
    // int arr[3][4];
    // // arr -> address
    // // arr[0] -> address
    // // arr[0][0] -> value, integer

    //! if we want both rows and columns to be dynamic
    int row=3, col=4;
    int **ptrArr;
    ptrArr = new int *[row];

    // ptrArr** from this moment after the new keyword, ptrArr** === ptrArr*[row]

    ptrArr[0] = new int[col];
    ptrArr[1] = new int[col];
    ptrArr[2] = new int[col];
    // this will make 2d arr that both col and rows are dynamic
    // from this moment after the new keyword, ptrArr*[row] === ptrArr[row][col]

    // for deallocation
    delete ptrArr[0];
    delete ptrArr[1];
    delete ptrArr[2];
    delete ptrArr;
    return 0;
}
