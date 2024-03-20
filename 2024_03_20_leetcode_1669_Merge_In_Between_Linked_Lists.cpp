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
private:
    ListNode *findNode(ListNode *node, int n) {
        int i = 1;
        while (i < n) {
            node = node->next;
            i++;
        }
        return node;
    }
    ListNode *lastNode(ListNode *node) {
        while (node->next)
            node = node->next;
        return node;
    }
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if (list1 == NULL)  return list2;
        ListNode *list2_last = lastNode(list2);
        ListNode *aNode = findNode(list1, a);
        ListNode *bNode = findNode(list1, b);
        if (list2)
            list2_last->next = bNode->next->next;
        aNode->next = list2;
        return list1;
    }
};