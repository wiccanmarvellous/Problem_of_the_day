#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * */
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
    ListNode *insertion(ListNode *head)
    {
        ListNode *temp = head;
        cout << "Enter data in linked list and press -1 to stop:-" << endl;
        while (true)
        {
            int d;
            cin >> d;
            if (d == -1)
                break;
            ListNode *newnode = new ListNode;
            newnode->val = d;
            if (head == NULL)
                head = newnode;
            else
                temp->next = newnode;
            temp = newnode;
        }
        temp->next = NULL;
        cout << endl;
        return head;
    }

    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp = head;
        int n = 0, i = 0;
        while (temp != NULL)
        {
            n++;
            temp = temp->next;
        }
        vector<vector<int>> arr(n, vector<int>(2));
        temp = head;
        while (temp != NULL)
        {
            arr[i][0] = (temp->val);
            arr[n - 1 - i][1] = (temp->val);
            i++;
            temp = temp->next;
        }

        temp = head;
        i = 1;
        while (temp != NULL)
        {
            if (i == k)
                temp->val = arr[k - 1][1];
            else if (i == (n + 1 - k))
                temp->val = arr[k - 1][0];
            i++;
            temp = temp->next;
        }

        return head;
    }
};

int main()
{
    Solution obj;
    ListNode *head = NULL;
    int k;
    head = obj.insertion(head);
    cout << "Enter node to be swapped: ";
    cin >> k;
    head = obj.swapNodes(head, k);
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
    return 0;
}