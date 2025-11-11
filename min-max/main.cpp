#include <iostream>
using namespace std;

//? 1-Array min  and max value  |7|3|5|6|8|-1|-11|33|99| no built in fn

// int main() {
//     int arr[] = {7, 35, 8, 99, 3, 6};
//     int max = arr[0];
//     int min = arr[0];
//     int len = sizeof(arr) / sizeof(int);
//
//     for (int i = 0; i < len; ++i) {
//
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//
//     cout << "min: " << min << endl;
//     cout << "max: " << max << endl;
//
//     return 0;
// }

//? //2-Array sort    same array            |-11|-1|3|5|6||||||no built in fn

int main () {
    int arr[] = {7, 35, 8, 99, 3, 6};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

//? 3-search on array and return index
// int main () {
//     int arr[] = {7, 35, 8, 99, 3, 6};
//     int len = sizeof(arr) / sizeof(int);
//     int num = 0;
//
//     cout << "Enter the number u searching for: ";
//     cin >> num;
//
//     for (int i = 0; i < len; ++i) {
//         if (arr[i] == num) {
//             cout << "the index of ur number is: " << i << endl;
//         }
//     }
//
//     return 0;
// }