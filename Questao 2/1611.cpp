#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    unordered_map<int,int> memo;

    int dp(int n) {
        if (n == 0) return 0;
        if (memo.count(n)) return memo[n];

        int k = 31 - __builtin_clz(n);  
        int highest = 1 << k;


        if (n == highest)
            return memo[n] = (1 << (k + 1)) - 1;

        int full = (1 << (k + 1)) - 1;

        return memo[n] = full - dp(n - highest);
    }

    int minimumOneBitOperations(int n) {
        return dp(n);
    }
};
