// https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/

#include <iostream>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string s2;
        for (char c : s) {
            if (c == ' ') {
                s2.push_back('%');
                s2.push_back('2');
                s2.push_back('0');
            } else {
                s2.push_back(c);
            }
        }
        return s2;
    }
};

int main() {
    string s1 = "We are happy.";
    Solution s;
    string result = s.replaceSpace(s1);
    cout << result << endl;
    return 0;
}
