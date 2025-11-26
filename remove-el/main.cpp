#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int> nums, int val) {
        for (int i = 0; i < nums.size(); ++i) {
            if (val == nums[i]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        for (int i: nums) {
            cout << i << " ";
        }

        return val;
    }
};

int main() {
    Solution s;
    s.removeElement({0, 1, 2, 2, 3, 0, 4, 2}, 2);
    vector<int> v = {1, 2, 3, 4, 5};

    return 0;
}
