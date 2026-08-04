#include <iostream>
#include "solution.h"

using namespace std;

int main() {
    
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    Solution solution;
    solution.merge(nums1, m, nums2, n);
    for(const int& num : nums1) {
        cout << num << " ";        
    }
    cout << endl;

    return 0;
}