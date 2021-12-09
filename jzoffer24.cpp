// https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while(cur != nullptr) {
            ListNode* n = cur->next;
            cur->next = pre;
            pre = cur;
            cur = n;
        }
        return pre;
    }
};

int main() {
    ListNode n1(1);
    ListNode n2(3);
    ListNode *head = &n1;
    head->next = &n2;
    Solution s1;
    ListNode* result = s1.reverseList(head);
    cout << result->val << ", " << result->next->val << endl;
    return 0;
}
