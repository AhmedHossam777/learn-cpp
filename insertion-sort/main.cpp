#include <iostream>
using namespace std;

void insertion(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {

    int arr[8] = {90, 3, 6, 7, 0, 1000, 60, 2};

    insertion(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
