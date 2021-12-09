// https://leetcode-cn.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int rest = target - nums[i];
            if (m.count(rest)) {
                auto p = m.find(rest);
                result = { p->second, i };
                break;
            }
            m.insert({ nums[i], i });
        }
        return result;
    }
};

int main() {
    vector<int> v1 = { 2,7,11,15 };
    int target = 9;
    Solution s1;
    vector result = s1.twoSum(v1, target);
    cout << result[0] << ", " << result[1] << endl;
    return 0;
}
