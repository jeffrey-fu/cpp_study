// https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int len = s.size();
        s += s;
        return s.substr(n, len);
    }
};

int main() {
    string s1 = "reverse";
    int n = 2;
    Solution s;
    string result = s.reverseLeftWords(s1, n);
    cout << result << endl;
    return 0;
}
