#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        if (colors.size() < 3)  
            return false;

        int Alice = 0, Bob = 0;

        for (int i = 1; i < colors.size() - 1; i++) {
            if (colors[i - 1] == 'A' && colors[i] == 'A' && colors[i + 1] == 'A')
                Alice++;
            else if (colors[i - 1] == 'B' && colors[i] == 'B' && colors[i + 1] == 'B')
                Bob++;
        }
            
        return Alice > Bob ? true : false;
    }
};