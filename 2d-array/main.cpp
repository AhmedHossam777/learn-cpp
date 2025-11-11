#include <iostream>
using namespace std;

//5-2D Array
//array [3][4]
//calculate average of columns
//int avg[4]

int main() {
    int arr[3][4];
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter # at index"<<i<<","<<j<<endl;
            cin>>arr[i][j];
        }
    }
    int avg[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum = arr[j][i] + sum;
        }
        cout << "sum : " << sum << endl;
        avg[i] = sum / 4;
        sum = 0;
        cout << "avg: " <<avg[i] << endl;
    }

    for (int i = 0; i < 4; ++i) {
        cout << avg[i] << " ";
    }

    return 0;
}
