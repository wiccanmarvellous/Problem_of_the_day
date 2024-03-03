#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *i = head, *j = head;
        int m = 0;
        while (m < n) {
            m++;
            j = j->next;
        }
        if (j == nullptr)
            return head->next;
        while (j->next != nullptr) {
            i = i->next;
            j = j->next;
        }
        i->next = i->next->next;
        return head;
    }
};