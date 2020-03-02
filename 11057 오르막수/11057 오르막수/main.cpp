#include<iostream>
using namespace std;
int main (){
    int num;
    cin>>num;
    int dp[num+1][10],i,j,k;
    for(i=0;i<=num;i++){
        for(j=0;j<10;j++){
            if(i==1)
                dp[i][j]=1;
            else
                dp[i][j]=0;
        }
    }
    for(i=2;i<=num;i++){
        for(j=0;j<10;j++){
            for(k=j;k<10;k++){
                dp[i][j]+=dp[i-1][k];
                dp[i][j]%=10007;
            }
        }
    }
    int result=0;
    for(i=0;i<10;i++)
        result+=dp[num][i];
    cout<<result%10007<<endl;
}

