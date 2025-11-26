#include <iostream>
#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int numOfPairs = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i==j) {
                continue;
            }
            if ((ar[i]+ar[j])%k == 0) {
                numOfPairs++;
            }

        }
    }

    return numOfPairs/2;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}