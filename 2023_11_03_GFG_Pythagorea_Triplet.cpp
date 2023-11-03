#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    unordered_set<int> set;
	    for (int i = 0; i < n; i++)
	        set.insert(arr[i] * arr[i]);
	    for (int i = 0; i < n; i++) {
	        for (int j = i + 1; j < n; j++) {
	            int temp = (arr[i] * arr[i]) + (arr[j] * arr[j]);
	            if (set.find(temp) != set.end())
	                return true;
	        }
	    }
	    return false;
	}
};