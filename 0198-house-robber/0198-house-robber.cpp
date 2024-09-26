class Solution {
public:
     // by tabulation (vvi)
//  int tabulation(int n,vector<int>& arr, vector<int>&dp){
//       dp[0]=arr[0];
//     for(int i=1;i<n;i++){
//       int pic=arr[i];
//       if(i>1)pic+=dp[i-2];
//       int nonpic=0+dp[i-1];
//       dp[i]= max(pic,nonpic);
//     }
//      return dp[n-1];
//    }

//      int rob(vector<int>& nums) {
//      int n=nums.size();
//       vector<int>dp(n,0);
//      return tabulation(n,nums,dp);

//      }

     // bruteforce
   // int rob(vector<int>& nums) {
    //    int sum1=0,sum2=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         if(i%2!=0){
    //             continue;
    //         }
    //         sum1+=nums[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         if(i%2==0){
    //             continue;
    //         }
    //         sum2+=nums[i];
    //     }
    //     return max(sum1,sum2);
    // }
   
   // optimize space complexity 
     int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];  if(i>1)take+=prev2;
           int nontake=0+prev;
           int curr=max(take,nontake);
           prev2=prev;
           prev=curr;
        }
    return prev;
     }
};