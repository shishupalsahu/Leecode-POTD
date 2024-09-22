class Solution {
public:
    vector<int> lexicalOrder(int n) {
       set<string>st;
       vector<int>ans;
       for(int i=1;i<=n;i++){
        st.insert(to_string(i)) ;
       } 
       for(auto &it:st){
        ans.push_back(stoi(it));
       }
       return ans;
    }
};