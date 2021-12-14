// https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int left = 0, right = len - 1, middle;
        if (nums[0] != 0) {
            return 0;
        }
        if (nums[right] != len) {
            return len;
        }
        while(left < right - 1) {
          middle = (left + right) / 2;
          if (middle < nums[middle]) {
              right = middle;
          } else {
              left = middle;
          }
        }
        return nums[right] - 1;
    }
};

int main() {
    vector<int> v = {0,1,3};
    Solution s;
    int result = s.missingNumber(v);
    cout << result << endl;
    return 0;
}
