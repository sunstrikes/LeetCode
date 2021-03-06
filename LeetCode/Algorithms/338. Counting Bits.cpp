class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        int offset = 1;
        for(int i=1;i<=num;i++){
            if(offset * 2 == i){
                offset *=2;
            }
            dp[i] = dp[i-offset]+1;
        }
        return dp;
    }
};