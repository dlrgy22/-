#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int stair[301],dp[301],i;
    for(i=1;i<=num;i++){
        cin>>stair[i];
    }
    dp[0]=0;
    dp[1]=stair[1];
    dp[2]=stair[2]+stair[1];
    for(i=3;i<=num;i++){
        dp[i]=max(stair[i]+dp[i-2],stair[i]+stair[i-1]+dp[i-3]);
    }
    cout<<dp[num];
}
