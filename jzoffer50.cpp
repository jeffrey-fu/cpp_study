// https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/

#include <iostream>
using namespace std;

class Solution {
public:
    static const int letterACode = 97;
    static const int letterCount = 26;
    char firstUniqChar(string s) {
        char first = ' ';
        int store[letterCount]{};
        for (char c : s) {
            store[int(c) - letterACode]++;
        }
        for (char c : s) {
            if (store[int(c) - letterACode] == 1) {
                first = c;
                break;
            }
        }
        return first;
    }
};

int main() {
    string str = "leetcode";
    Solution s;
    char result = s.firstUniqChar(str);
    cout << result << endl;
    return 0;
}
