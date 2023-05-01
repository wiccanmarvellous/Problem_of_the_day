#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0, n = salary.size();
        int min_sal = INT_MAX, max_sal = 0;
        for (int i = 0; i < n; i++)
        {
            if (salary[i] < min_sal)
                min_sal = salary[i];
            else if (salary[i] > max_sal)
                max_sal = salary[i];
            sum += salary[i];
        }
        sum = sum - (min_sal + max_sal);
        return sum / (n - 2);
    }
};

int main()
{
    vector<int> salary{4000, 3000, 1000, 2000};
    Solution obj;
    cout << "Average salary excluding the minimum and maximum salary is " << obj.average(salary) << endl;
    return 0;
}