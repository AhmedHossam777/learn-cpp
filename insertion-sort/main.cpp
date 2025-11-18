#include <iostream>
using namespace std;

void insertion(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j > 0; --j) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main() {
    int arr[8] = {90, 3, 6, 7, 0, 1000, 60, 2};
    insertion(arr, 8);
    for (int i = 0; i < 8; ++i) cout << arr[i] << ' ';
    return 0;
}
