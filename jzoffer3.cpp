// https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        vector<int> v(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]]++;
            if (v[nums[i]] > 1) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> v = {2,3,3,4};
    Solution s;
    int result = s.findRepeatNumber(v);
    cout << result << endl;
    return 0;
}
