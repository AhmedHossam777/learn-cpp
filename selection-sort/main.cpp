//
// Created by aldod on 11/18/25.
//

#include <iostream>
using namespace std;

void selection(int arr[], int size) {
    int min;
    for (int i = 0; i < size; ++i) {
        min = i;
        for (int j = 0; j < size; ++j) {
            if (arr[min] > arr[j]) {
                swap(arr[min], arr[j]);
            }
        }
    }
}

int main() {
    cout << "hello, selection sort" << endl;
    //? find the smallest element and swap it to the front of the array
    //? repeat and swap

    int arr[5] = {90,3,6,20,7};

    selection(arr,5);

    for (int i = 0; i < 5; ++i) {
        cout <<" " << arr[i];
    }
    return 0;
}
