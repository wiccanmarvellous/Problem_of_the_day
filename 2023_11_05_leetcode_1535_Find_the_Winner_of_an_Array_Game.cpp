#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int  n = arr.size();

        if (k >= n) return *max_element(arr.begin(), arr.end());

        unordered_map<int, int> freq;
        for (auto i : arr)  freq[i] = 0;
        
        int i = 0;
        while (1) {
            int j = (i + 1) % n;
            if (arr[i] < arr[j]) {
                freq[arr[j]]++;
                if (freq[arr[j]] == k)  return arr[j];
            }
            else {
                freq[arr[i]]++;
                if (freq[arr[i]] == k)  return arr[i];
                swap(arr[i], arr[j]);
            }
            i = j;
        }        
        return -1;
    }
};