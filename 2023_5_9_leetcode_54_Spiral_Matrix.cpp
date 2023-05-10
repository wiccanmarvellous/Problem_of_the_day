#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {
//         vector<vector<int>> dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//         vector<int> res;
//         int nr = matrix.size();
//         if (nr == 0)
//             return res;
//         int nc = matrix[0].size();
//         if (nc == 0)
//             return res;

//         vector<int> nSteps{nc, nr - 1};

//         int iDir = 0;        // index of direction.
//         int ir = 0, ic = -1; // initial position
//         while (nSteps[iDir % 2])
//         {
//             for (int i = 0; i < nSteps[iDir % 2]; ++i)
//             {
//                 ir += dirs[iDir][0];
//                 ic += dirs[iDir][1];
//                 res.push_back(matrix[ir][ic]);
//             }
//             nSteps[iDir % 2]--;
//             iDir = (iDir + 1) % 4;
//         }
//         return res;
//     }
// };

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> arr;
        int i, j, t = 0, b = matrix.size() - 1, l = 0, r = matrix[0].size() - 1;
        while (t <= b && l <= r)
        {
            for (i = t, j = l; j <= r; j++)
                arr.push_back(matrix[i][j]);
            t++;
            for (j = r, i = t; i <= b; i++)
                arr.push_back(matrix[i][j]);
            r--;
            if (t <= b)
            {
                for (i = b, j = r; j >= l; j--)
                    arr.push_back(matrix[i][j]);
                b--;
            }

            if (l <= r)
            {
                for (j = l, i = b; i >= t; i--)
                    arr.push_back(matrix[i][j]);
                l++;
            }
        }
        return arr;
    }
};

int main()
{
    vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution obj;
    vector<int> ans = obj.spiralOrder(v);
    for (auto it : ans)
        cout << it << ' ';
    cout << endl;
    return 0;
}