#include <iostream>
using namespace std;
#include <vector>


class Solution {
public:
    int maxOperations(vector<int> &nums, int k) {
        for (const int &i: nums) {
            cout << i << "  ";
        }
    }
};

int main() {
    return 0;
}
