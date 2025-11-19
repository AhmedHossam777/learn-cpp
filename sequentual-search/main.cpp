#include <iostream>
using namespace std;

int seq(int nums[], int size, int num) {
    for (int i = 0; i < size; ++i) {
        if (nums[i] == num) {
            return i;
        }
    }
}

int main() {
    int size = 5;
    int arr[5] = {50, 3, 0, 90, 6};

    int idx = seq(arr, size, 0);

    cout << "the number you want is at index : " << idx << endl;
    return 0;
}
