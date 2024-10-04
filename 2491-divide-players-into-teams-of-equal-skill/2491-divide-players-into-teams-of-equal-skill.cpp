// class Solution {
// public:
//     long long dividePlayers(vector<int>& skills) {
//         int n=skills.size();
//         int target=0;
//         int count=0;
//         int i=0;
//         int sum=0;
//         target=n;// skills[n-1]+skills[0]
//         if(n==2){
//             return skills[i]*skills[i+1];
//         }
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(skills[i]+skills[j]==target){
//                  sum=skills[i]*skills[j];
//             }
//             count=count+sum;
//             }
//             return count;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans = 0 ;
        int n = skill.size() ;
        if( skill.size() == 2 )
         return skill[0]*skill[1] ;
        sort( skill.begin(), skill.end() );
        
        int i=n/2-1 ;
        int j=n/2 ;
        int sum = skill[i]+ skill[j]; 
        while( i>=0 && j<n ){
            int tmp = skill[i] + skill[j] ;
            
            // It is necessary to divide all the teams equally 
            if( tmp == sum ){
                // Calculate the chemistry 
                ans += skill[i]*skill[j] ;
            }
            else {
                ans = 0;
                break ;
            }
            i--;
            j++;
        }   
        if( ans == 0 ) return -1 ;
        
        return ans ;
    }
};