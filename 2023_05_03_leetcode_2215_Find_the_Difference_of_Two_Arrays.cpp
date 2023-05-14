#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a, b;
        set<int> n1(begin(nums1), end(nums1)), n2(begin(nums2), end(nums2));
        set_difference(begin(n1), end(n1), begin(n2), end(n2), back_inserter(a));
        set_difference(begin(n2), end(n2), begin(n1), end(n1), back_inserter(b));
        return {a, b};
    }
};

int main()
{
    vector<int> nums1{1, 2, 3}, nums2{2, 4, 6};
    vector<vector<int>> a;
    Solution obj;
    cout << "Difference of two arrays is ";
    a = obj.findDifference(nums1, nums2);
    for (auto it : a)
    {
        for (auto i : it)
            cout << i << ' ';
        cout << endl;
    }
}