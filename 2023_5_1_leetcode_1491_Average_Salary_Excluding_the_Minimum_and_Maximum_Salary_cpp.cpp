#include <bits/stdc++.h>
using namespace std;

// First approach
// class Solution {
// public:
//     double average(vector<int>& salary) {
//         double sum = 0, n = salary.size();
//         int min_sal = INT_MAX, max_sal = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (salary[i] < min_sal)
//                 min_sal = salary[i];
//             if (salary[i] > max_sal)
//                 max_sal = salary[i];
//             sum += salary[i];
//         }
//         sum = sum - (min_sal + max_sal);
//         return sum / (n - 2);
//     }
// };

// Second approach
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum = 0, count = salary.size() - 2;
        vector<int>::iterator a = next(salary.begin(), 1), b = prev(salary.end(), 1);
        for (auto i = a; i != b; i++)
            sum += (*i);
        return (sum / count);
    }
};

// Third approach
class Solution {
public:
    double average(vector<int>& salary) {
        double i, j, ans;
        i = *min_element(salary.begin(), salary.end());
        j = *max_element(salary.begin(), salary.end());
        ans = accumulate(salary.begin(), salary.end(), 0.);
        return (ans - i - j) / (salary.size() - 2);
    }
};


int main()
{
    vector<int> salary{4000, 3000, 1000, 2000};
    Solution obj;
    cout << "Average salary excluding the minimum and maximum salary is " << obj.average(salary) << endl;
    return 0;
}
