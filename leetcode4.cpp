// https://leetcode-cn.com/problems/median-of-two-sorted-arrays/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMedianSortedArrays(vector<int>& nums1) {
        for (int x : nums1) {
            cout << x << endl;
        }
    }
};

int main() {
    vector<int> v1 = { 2,40 };
    vector<int> v2 = { 5,10,8 };
    Solution s1;
    s1.findMedianSortedArrays(v1);
    return 0;
}
