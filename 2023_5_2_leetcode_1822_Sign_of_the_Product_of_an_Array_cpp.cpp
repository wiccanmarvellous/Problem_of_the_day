#include <bits/stdc++.h>
using namespace std;

// Approach 1
// class Solution {
// public:
//     int signFunc(int count) {
//         if (count % 2 == 0)
//             return 1;
//         return -1;
//     }
//     int arraySign(vector<int>& nums) {
//         int count = 0, n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] == 0)
//                 return 0;
//             if (nums[i] < 0)
//                 count++;
//         }
//         return signFunc(count);
//     }
// };

// Approach 2
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for (auto i : nums) {
            if (i == 0) return 0;
            if (i < 0)  sign = -sign;
        }
        return sign;
    }
};

int main() {
    int n, a, s;

    vector<int> nums;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements in array:-" << endl;
    while (n--)
    {
        cin >> a;
        nums.push_back(a);
    }
    Solution obj;
    s = obj.arraySign(nums);
    cout << "Sign of product of array is ";
    if (s == 0) cout << "0.";
    else if (s < 0) cout << "negative.";
    else cout << "positive.";
    return 0;
}