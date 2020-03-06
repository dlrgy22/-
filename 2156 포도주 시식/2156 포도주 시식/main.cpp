#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int wine[10001],i;
    for(i=1;i<=num;i++){
        cin>>wine[i];
    }
    int dp[10001];
    dp[0]=0;
    dp[1]=wine[1];
    dp[2]=wine[1]+wine[2];
    for(i=2;i<=num;i++){
        dp[i]=max(wine[i]+dp[i-2],wine[i]+wine[i-1]+dp[i-3]);
        dp[i]=max(dp[i],dp[i-1]);
    }
    cout<<dp[num]<<endl;
}
