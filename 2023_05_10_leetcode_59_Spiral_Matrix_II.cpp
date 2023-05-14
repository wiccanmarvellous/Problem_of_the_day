#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> arr;
        vector<vector<int>> matrix(n, vector<int>(n));
        int i, j, t = 0, b = n - 1, l = 0, r = n - 1, a = 1;
        while (t <= b && l <= r)
        {
            for (i = t, j = l; j <= r; j++)
                matrix[i][j] = a++;
            t++;
            for (j = r, i = t; i <= b; i++)
                matrix[i][j] = a++;
            r--;
            if (t <= b)
            {
                for (i = b, j = r; j >= l; j--)
                    matrix[i][j] = a++;
                b--;
            }

            if (l <= r)
            {
                for (j = l, i = b; i >= t; i--)
                    matrix[i][j] = a++;
                l++;
            }
        }
        return matrix;
    }
};

int main()
{
    int n;
    cout << "Enter size of matrix n x n: ";
    cin >> n;
    Solution obj;
    vector<vector<int>> ans = obj.generateMatrix(n);
    for (auto it : ans)
    {
        for (auto i : it)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}