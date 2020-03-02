#include<iostream>
#include<string.h>
using namespace std;
int large=0,sum=0,n;
void check(int *health,int *happy,int *visit,int hp,int num){
    int i;
    for(i=num;i<n;i++){
        if(visit[i]==0&&(hp-health[i])>0){
            visit[i]=1;
            sum+=happy[i];
            large=max(sum,large);
            check(health,happy,visit,hp-health[i],i);
            visit[i]=0;
            sum-=happy[i];
        }
    }
}
int main(){
    cin>>n;
    int health[n],happy[n],i,visit[n];
    for(i=0;i<n;i++){
        cin>>health[i];
    }
    for(i=0;i<n;i++){
        cin>>happy[i];
    }
    memset(visit,0,sizeof(visit));
    check(health,happy,visit,100,0);
    cout<<large<<endl;
}
