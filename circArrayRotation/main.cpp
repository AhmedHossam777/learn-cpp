#include <iostream>
#include <vector>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    k = k % n;

    vector<int> result;
    for (int query : queries) {
        result.push_back(a[(n - k + query) % n]);
    }

    return result;
}

int main() {
    // std::cout << "Hello, World!" << std::endl;
    vector<int> res = circularArrayRotation({3, 4, 5}, 2, {1, 2});

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }

    return 0;
}
