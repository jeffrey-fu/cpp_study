// https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/

#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        ListNode* node = head;
        size_t count = 0;
        while(node != nullptr) {
            count++;
            node = node->next;
        }
        vector<int> v(count);
        node = head;
        for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
            *it = node->val;
            node = node->next;
        }
        return v;
    }
};

int main() {
    ListNode n1(1);
    ListNode n2(3);
    ListNode *head = &n1;
    head->next = &n2;
    Solution s1;
    vector<int> v;
    v = s1.reversePrint(head);
    cout << v[0] << ", " << v[1] << endl;
    return 0;
}
