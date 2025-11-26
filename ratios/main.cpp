#include <iostream>
#include <vector>
using namespace std;

void plusMinus(vector<int> arr) {
    float numOfZeros = 0;
    float numOfPositive = 0;
    float numOfNegative = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            numOfZeros++;
        } else if (arr[i] > 0) {
            numOfPositive++;
        }else {
            numOfNegative++;
        }
    }

    cout << numOfPositive/arr.size() << endl;
    cout << numOfNegative/arr.size() << endl;
    cout << numOfZeros/arr.size() << endl;
}



int main() {
    // std::cout << "Hello, World!" << std::endl;

    return 0;
}