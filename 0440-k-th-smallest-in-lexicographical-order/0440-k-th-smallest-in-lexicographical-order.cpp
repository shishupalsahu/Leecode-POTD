class Solution {
public:
    int findKthNumber(int n, int k) {
       set<string>st;
       vector<int>ans;
       for(int i=1;i<=n;i++){
        st.insert(to_string(i));
        } 
       for(auto &it:st){
        ans.push_back(stoll(it));
       }
       return ans[k-1];
    }
};