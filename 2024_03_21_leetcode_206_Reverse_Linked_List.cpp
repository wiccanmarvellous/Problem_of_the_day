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
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev) {
        if (curr == NULL) {
            head = prev;
            return;
        }
        reverse(head, curr->next, curr);
        curr->next = prev;
    }

    ListNode* reverseList(ListNode* head) {
        reverse(head, head, NULL);
        return head;
    }
    // ListNode* reverseList(ListNode* head) {
    //     ListNode *prev = NULL;
    //     ListNode *curr = head;
    //     while (curr != NULL) {
    //         ListNode *nxt = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = nxt;
    //     }
    //     return prev;
    // }
};