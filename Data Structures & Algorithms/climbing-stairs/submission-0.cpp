class Solution {
public:
    int distinctWays(int n,vector<int>&ways){
        if(n==0)return 1;
        if(n==1)return 1;
        if(ways[n]!=-1)return ways[n];
        return ways[n]=distinctWays(n-1,ways)+distinctWays(n-2,ways);

    }
    int climbStairs(int n) {
        vector<int>ways(n+1,-1);
        return distinctWays(n,ways);

    }
};
