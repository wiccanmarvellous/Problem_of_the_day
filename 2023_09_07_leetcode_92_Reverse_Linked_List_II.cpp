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

    ListNode *reverse(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *prev = NULL, *curr = head;
        while (curr != NULL) {
            ListNode *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *start_prev = NULL, *start = NULL, *end = NULL, *end_next = NULL;
        ListNode *curr = head;
        int i = 1;
        while (curr != NULL) {
            if (i < left)
                start_prev = curr;
            if (i == left)
                start = curr;
            if (i == right)
                end = curr;
            curr = curr->next;
            i++;
        }       
        end_next = end->next;
        end->next = NULL;
        end = reverse(start);
        if (start_prev == NULL) {
            head = end;
        }
        else {
            start_prev->next = end;
        }
        start->next = end_next;
        return head;
    }
};