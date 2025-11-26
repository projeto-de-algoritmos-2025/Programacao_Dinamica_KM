#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<string, int> memo;

    string freqToString(vector<int>& freq) {
        string key;
        for (int f : freq) {
            key += to_string(f) + ",";
        }
        return key;
    }

    int dp(int idx, vector<string>& words, vector<int>& score, vector<int>& freq) {
        if (idx == words.size())
            return 0;

        string key = to_string(idx) + "#" + freqToString(freq);
        if (memo.count(key)) return memo[key];

        int best = dp(idx + 1, words, score, freq);
        
        vector<int> newFreq = freq;
        int wordScore = 0;
        bool canUse = true;

        for (char c : words[idx]) {
            int id = c - 'a';
            if (newFreq[id] == 0) {
                canUse = false;
                break;
            }
            newFreq[id]--;
            wordScore += score[id];
        }

        if (canUse) {
            best = max(best, wordScore + dp(idx + 1, words, score, newFreq));
        }

        return memo[key] = best;
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26, 0);
        for (char c : letters) freq[c - 'a']++;

        return dp(0, words, score, freq);
    }
};
