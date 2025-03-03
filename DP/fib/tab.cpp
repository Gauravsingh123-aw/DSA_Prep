#include<bits/stdc++.h>
using namespace std;
int f(int n){
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    int prev1=0;
    int prev2=1;
    int ans;
    for(int i=2;i<=n;i++){
        ans=prev1+prev2;
        prev2=prev1;
        prev1=ans;
    }
    return ans;
}
int main()
{
cout<<"enter size";
int n;
cin>>n;
cout<<f(n+1);
return 0;
}

//tc - O(n)
//sp -O(1)