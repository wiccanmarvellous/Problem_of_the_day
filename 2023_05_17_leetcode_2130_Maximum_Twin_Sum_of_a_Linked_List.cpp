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
    int pairSum(ListNode *head)
    {
        int n = 0, i = 0, sum = 0;
        ListNode *temp = head, *rev = nullptr;
        while (temp != nullptr)
            n++, temp = temp->next;
        if (n == 2)
            return head->val + head->next->val;
        temp = head;
        while (i < n / 2 - 1)
            i++, temp = temp->next;
        rev = reverse(temp->next);
        temp->next = rev;
        temp = head;
        while (rev != nullptr)
        {
            if (temp->val + rev->val > sum)
                sum = temp->val + rev->val;
            temp = temp->next;
            rev = rev->next;
        }
        return sum;
    }

    ListNode *reverse(ListNode *head)
    {
        ListNode *temp = head, *rev = nullptr;
        ListNode *t1 = head, *t2 = head->next, *t3 = head->next->next;
        t1->next = nullptr;
        while (t3 != nullptr)
        {
            t2->next = t1;
            t1 = t2;
            t2 = t3;
            t3 = t3->next;
        }
        t2->next = t1;
        rev = t2;
        return rev;
    }
};