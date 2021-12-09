// https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof/

#include <iostream>
#include <unordered_map>
using namespace std;

/**
 * Definition for a Node.
 */

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return head;
        }
        unordered_map<Node*, Node*> m;
        Node* temp = head;
        while(temp != nullptr) {
            m[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp != nullptr) {
            m[temp]->next = m[temp->next];
            if (temp->random != nullptr) {
                m[temp]->random = m[temp->random];
            }
            temp = temp->next;
        }
        return m[head];
    }
};

int main() {
    Node* n1 = new Node (1);
    Node* n2 = new Node (2);
    n1->next = n2;
    n2->random = n1;
    Solution s1;
    Node* result = s1.copyRandomList(n1);
    cout << result->val << endl;
    return 0;
}
