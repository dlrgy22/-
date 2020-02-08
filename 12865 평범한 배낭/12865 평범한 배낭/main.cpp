#include<iostream>
#include<string.h>
using namespace std;
typedef struct Stuff{
    int value=0;
    int weight=0;
    int check[100];
}Stuff;
int main(){
    int n,k,i,j,k;
    cin>>n>>k;
    Stuff stuff[n];
    Stuff dp[n][k];
    for(i=0;i<n;i++){
        cin>>stuff[i].value>>stuff[i].weight;
    }
    for(i=1;i<k;i++){
        for(j=0;j<n;j++){
            for(k=0,k<n;k++)
        }
    }
}
