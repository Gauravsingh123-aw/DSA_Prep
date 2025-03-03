#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int size,int ind){
    if(ind>=size-1){
        return 0;
    }
    int left=INT_MAX;
    int right=INT_MAX;
    // taking one jump
    if(ind+1<size)
    left=abs(arr[ind+1]-arr[ind])+fun(arr,size,ind+1);

    //taking two jumps
    if(ind+2<size)
    right=abs(arr[ind+2]-arr[ind])+fun(arr,size,ind+2);

    return min(left,right);
}
int main()
{
int arr[]={30,10,60,10,60,50};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<fun(arr,size,0);
return 0;
}