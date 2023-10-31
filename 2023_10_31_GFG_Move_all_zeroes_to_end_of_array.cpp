#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i = 0, j = 0;
	    while (j < n) {
	        if (arr[i] == 0 && arr[j] != 0) {
                swap(arr[i], arr[j]);
                i++;
	        }
	        else if (arr[i] != 0)
	            i++;
	        j++;
	    }
	    return;
	}
};