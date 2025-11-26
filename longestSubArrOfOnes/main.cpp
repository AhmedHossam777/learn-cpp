#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int numOfOnes = 0;
    int prevNumOfOnes = 0;
    int maxNumOfOnes = 0;

    int longestSubarray(const vector<int> &nums) {
        prevNumOfOnes = 0;
        numOfOnes = 0;
        maxNumOfOnes = 0;
        bool hasZero = false;

        for (int x: nums) {
            if (x == 1) {
                ++numOfOnes;
            } else {
                hasZero = true;
                maxNumOfOnes = max(maxNumOfOnes, prevNumOfOnes + numOfOnes);
                prevNumOfOnes = numOfOnes;
                numOfOnes = 0;
            }
        }

        maxNumOfOnes = max(maxNumOfOnes, prevNumOfOnes + numOfOnes);

        if (!hasZero) return (int) nums.size() - 1;

        return maxNumOfOnes;
    }
};


int main() {
    Solution s;
    int maxNumOfOnes = s.longestSubarray({0, 1, 1, 1, 0, 1, 1, 0, 1});

    cout << maxNumOfOnes << endl;
    return 0;
}
