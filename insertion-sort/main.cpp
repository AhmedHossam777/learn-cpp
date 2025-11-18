#include <iostream>
using namespace std;

void insertion(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; --j) {
            swap(arr[j], arr[j - 1]);
        }
    }
}

int main() {
    int arr[8] = {90, 3, 6, 7, 0, 1000, 60, 2};
    insertion(arr, 8);
    for (int i = 0; i < 8; ++i) cout << arr[i] << ' ';
    return 0;
}
