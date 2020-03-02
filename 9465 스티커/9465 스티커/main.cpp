#include<iostream>
using namespace std;
int main(){
    int t,num,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>num;
        int sticker[2][num],dp[2][num];
        int j,k;
        for(j=0;j<2;j++){
            for(k=0;k<num;k++){
                cin>>sticker[j][k];
                dp[j][k]=0;
            }
        }
        dp[0][0]=sticker[0][0];
        dp[1][0]=sticker[1][0];
        dp[0][1]=dp[1][0]+sticker[0][1];
        dp[1][1]=dp[0][0]+sticker[1][1];
        for(j=2;j<num;j++){
            dp[0][j]=max(dp[1][j-2],dp[1][j-1])+sticker[0][j];
            dp[1][j]=max(dp[0][j-2],dp[0][j-1])+sticker[1][j];
        }
        int result=max(dp[0][num-1],dp[1][num-1]);
        cout<<result<<endl;
    }
}
