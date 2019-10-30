string multiplyStrings(string s1, string s2) {
   //Your code here
   
   int n = s1.length();
   int m = s2.length();
   vector<int>num(n+m,0);
   
     int carry = 0;
     int id1=0,id2=0;
     carry=0;
     int sign=0;
     if(s1[0]=='-')sign++;
     if(s2[0]=='-')sign++;
     for(int i=n-1;i>=0;i--)
     {
         if(s1[i]=='-'){continue;}
          int num1 = s1[i]-'0';
          int sum=0;
          id2=0;
          
          for(int j=m-1;j>=0;j--)
          {
              if(s2[j]=='-'){continue;}
              int num2 = s2[j]-'0';
              sum = num1 * num2 + num[id1 + id2] + carry;
              carry=sum/10;
              num[id1 + id2] = sum%10;
              id2++;
        
          }
         if(carry>0)
         {
             num[id1+id2]+=carry;
             carry/=10;
         }
          id1++;
     }
     
     string ans="";
     int t=m+n-1;
     while(!num[t])t--;
     for(int i=0;i<=t;i++)
     {
             ans+=to_string(num[i]);
         
     }
     if(ans=="")return "0";
     reverse(ans.begin(),ans.end());
     if(sign==1)ans="-"+ans;
     return ans;
}
