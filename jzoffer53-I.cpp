// https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return 0;
        }
        int left = 0, right = nums.size() - 1, middle = 0;
        while (left <= right) {
           middle = (left + right) / 2;
           if (target > nums[middle]) {
               left = middle + 1;
           } else if (target < nums[middle]) {
               right = middle - 1;
           } else {
               break;
           }
        }
        int count = 0;
        int i = middle;
        while (i >= left && target == nums[i--]) {
            count++;
        }
        i = middle + 1;
        while (i <= right && target == nums[i++]) {
            count++;
        }
        return count;
    }
};

int main() {
    vector<int> v = {2,3,3,4,8,10,11};
    Solution s;
    int result = s.search(v, 3);
    cout << result << endl;
    return 0;
}
