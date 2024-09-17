#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for (string time : timePoints) {
            int hours = stoi(time.substr(0, 2));
            int mins = stoi(time.substr(3, 2));
            minutes.push_back(hours * 60 + mins);
        } 
        sort(minutes.begin(), minutes.end());
        
        int minDifference = INT_MAX;
        int n = minutes.size();
        
        for (int i = 1; i < n; i++) {
       minDifference = min(minDifference, minutes[i] - minutes[i - 1]);
        }  
  minDifference = min(minDifference, (1440 + minutes[0] - minutes[n - 1]));
        return minDifference;
    }
};
