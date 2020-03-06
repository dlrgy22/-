#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct location{
    int x=-1;
    int y=-1;
}Location;
int dis[100][13],m,least=1000000;
void check(int i,int j,int *arr){
    int k,a,b,small=0,sum=0;
    for(a=0;a<i;a++){
        for(b=0;b<m;b++){
            if(small>dis[i][arr[b]]){
                cout<<small<<endl;
                small=dis[i][arr[b]];
            }
        }
        cout<<sum;
        sum+=small;
    }
    if(least>sum)
        least=sum;
    for(k=m-1;k>=0;k--){
        if(arr[k]==(j-m+k))
            continue;
        else{
            arr[k]+=1;
            check(i,j,arr);
        }
    }
}
int main(){
    int n,i,j,k,num,n1=0,n2=0;
    cin>>n>>m;
    int arr[m];
    Location chicken[13];
    Location home[2*n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>num;
            if(num==1){
                home[n1].x=j;
                home[n1].y=i;
                n1+=1;
            }
            else if(num==2){
                chicken[n2].x=j;
                chicken[n2].y=i;
                n2+=1;
            }
        }
    }
    for(i=0;home[i].x!=-1;i++){
        for(j=0;chicken[j].x!=-1;j++){
            dis[i][j]=abs(home[i].x-chicken[j].x)+abs(home[i].y-chicken[i].y);
        }
    }
    for(k=0;k<m;k++){
        arr[k]=k;
    }
    check(i,j,arr);
    cout<<least<<endl;
}
