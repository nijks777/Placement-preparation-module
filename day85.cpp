class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	      
        int n=M+1;
        int m=V+1;
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
            dp[0][j]=INT_MAX-1;
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(coins[i-1]>j)
                dp[i][j]=dp[i-1][j];
                else
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                

            }
        }

      return dp[n-1][m-1]>V?-1:dp[n-1][m-1];
    }
	  
};
