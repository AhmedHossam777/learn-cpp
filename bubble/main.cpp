//
// Created by aldod on 11/18/25.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main () {
    int arr[5] = {90,3,6,20,7};

    bubbleSort(arr,5);

    for (int i = 0; i < 5; ++i) {
        cout <<" " << arr[i];
    }
    return 0;
}