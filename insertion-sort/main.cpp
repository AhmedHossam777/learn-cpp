#include <iostream>
using namespace std;

void insertion(int arr[], int size) {
    int lastIxd;
    for (int i = 0; i <= size-1; ++i) {
        lastIxd = i + 1;
        while (lastIxd > 0) {
            if (arr[lastIxd] < arr[lastIxd - 1]) {
                swap(arr[lastIxd], arr[lastIxd - 1]);
            }
            lastIxd--;
        }
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
