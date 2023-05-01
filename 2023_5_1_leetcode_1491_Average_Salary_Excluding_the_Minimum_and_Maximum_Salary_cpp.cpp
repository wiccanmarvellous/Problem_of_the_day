#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    vector<int> salary{4000, 3000, 1000, 2000};
    Solution obj;
    cout << "Average salary excluding the minimum and maximum salary is " << obj.average(salary) << endl;
    return 0;
}
