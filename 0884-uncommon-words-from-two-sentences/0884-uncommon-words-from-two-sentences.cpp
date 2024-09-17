#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        vector<string> result;
        auto addWords = [&](string s) {
            stringstream ss(s);
            string word;
            while (ss >> word) {
                wordCount[word]++;
            }
        };
        addWords(s1);
        addWords(s2);

        for (const auto& [word, count] : wordCount) {
            if (count == 1) {
                result.push_back(word);
            }
        }

        return result;
    }
};
