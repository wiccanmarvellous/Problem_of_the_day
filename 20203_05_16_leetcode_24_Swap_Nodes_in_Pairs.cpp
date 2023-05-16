#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *t1 = head, *t2 = head->next, *t3;
        t1->next = t2->next;
        t2->next = t1;
        head = t2;
        while (t1->next != nullptr && t1->next->next != nullptr)
        {
            t3 = t1;
            t1 = t1->next;
            t2 = t1->next;
            t1->next = t2->next;
            t2->next = t1;
            t3->next = t2;
        }
        return head;
    }
};