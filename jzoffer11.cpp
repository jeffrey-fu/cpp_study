// https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minArray(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int middle = left + ((right - left) >> 1);
            cout << left << middle <<", " << right << endl;
            if (nums[middle] < nums[right]) {
                right = middle;
            } else if (nums[middle] > nums[right]) {
                left = middle + 1;
            } else {
                right--;
            }
        }
        return nums[left];
    }
};

int main() {
    vector<int> v = {7,1,2,3,4,5,6};
    Solution s;
    int result = s.minArray(v);
    cout << result << endl;
    return 0;
}
