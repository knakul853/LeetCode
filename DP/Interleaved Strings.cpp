bool isInterleave(string A, string B, string C) 
{
   int n = A.length();
   int m = B.size();
   if(n+m!=C.size())return false;
   int dp[n+1][m+1];
   
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=m;j++)
       {
           if(!i&&!j)dp[i][j]=true;
           
           else if(!i)
           {
               dp[i][j]=dp[i][j-1]&&B[j-1]==C[i+j-1];
           }
            else if(!j)
           {
               dp[i][j]=dp[i-1][j]&&A[i-1]==C[i+j-1];
           }
           else 
           dp[i][j] = (dp[i][j-1]&&B[j-1]==C[i+j-1] )|| (dp[i-1][j]&&A[i-1]==C[i+j-1]);
       }
   }
   return dp[n][m];
}
