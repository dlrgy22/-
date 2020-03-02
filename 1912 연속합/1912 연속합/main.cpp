#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int dp[i],large;
    memset(dp,0,sizeof(dp));
    dp[n-1]=arr[n-1];
    large=dp[n-1];
    for(i=n-2;i>=0;i--){
        if(dp[i+1]>0)
            dp[i]=arr[i]+dp[i+1];
        else
            dp[i]=arr[i];
        large=max(large,dp[i]);
    }
    cout<<large<<endl;
}
