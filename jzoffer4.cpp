// https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/

#include <iostream>
#include <vector>
using namespace std;

#define watch(x) cout << #x << ": " << x << endl;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int bottom = matrix.size() - 1;
        if (bottom < 0) {
            return false;
        }
        int right = matrix[0].size() - 1;
        if (right < 0) {
            return false;
        }
        int top = 0;
        int current;
        while(top <= bottom && right >= 0) {
            current = matrix[top][right];
            if (target == current) {
                return true;
            }
            if (target > current) {
                top ++;
            } else {
                right --;
            }
        }
        return false;
    }
};


int main() {
    Solution s;
    vector<vector<int>> matrix = {{ 1,2,3,4,5 }};
    int target = 2;
    bool result = s.findNumberIn2DArray(matrix, target);
    cout << result << endl;
    return 0;
}
