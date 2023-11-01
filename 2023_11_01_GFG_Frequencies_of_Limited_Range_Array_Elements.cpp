#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int, int> freq;
        for (auto i : arr)
            freq[i]++;
        for (int i = 0; i < N; i++) {
            if (freq.find(i + 1) == freq.end())
                arr[i] = 0;
            else
                arr[i] = freq[i + 1];
        }
    }
};