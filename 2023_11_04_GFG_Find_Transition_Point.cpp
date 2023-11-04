#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int i = 0, j = n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (i == j and arr[i] == 1)
                return i;
            if (arr[mid] < 1)
                i = mid + 1;
            else if (arr[mid] == 1)
                j = mid;
        }
        return -1;
    }
};