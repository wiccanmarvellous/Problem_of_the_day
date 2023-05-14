#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isVowel(char i)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
            return true;
        return false;
    }
    int maxVowels(string s, int k)
    {
        int i = 0, j = i + k, len = 0, x = 0, n = s.length(), mLen;
        while (x != j)
        {
            if (isVowel(s[x]))
                len++;
            x++;
        }
        mLen = len;
        while (j != n)
        {
            if (isVowel(s[i]))
                len--;
            if (isVowel(s[j]))
                len++;
            if (len > mLen)
                mLen = len;
            i++, j++;
        }
        return mLen;
    }
};

int main()
{
    string s = "leetcode";
    int k = 3;
    Solution obj;
    cout << "Maximum Number of Vowels in a Substring of Given Length are " << obj.maxVowels(s, k) << endl;
    return 0;
}