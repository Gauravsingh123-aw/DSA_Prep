#include<bits/stdc++.h>
using namespace std;
int fun(int heights[],int n,int ind,vector<int>&dp){
    if(ind>=n-1){
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int left=INT_MAX;
    int right=INT_MAX;
    // take one jump
    if(ind+1<n)
    left=abs(heights[ind+1]-heights[ind])+fun(heights,n,ind+1,dp);

    // take two jump
    if(ind+2<n)
    right=abs(heights[ind+2]-heights[ind])+fun(heights,n,ind+2,dp);

    dp[ind]= min(left,right);
    return dp[ind];

}
int main()
{
    int arr[]={30,10,60,10,60,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>dp(size+1,-1);
    cout<< fun(arr,size,0,dp);
return 0;
}