#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
int main (){
    int n,total;
    queue<int>q;
    cin>>n>>total;
    int arr[n][n],i,j,c1,c2,count=0,visit[n];
    memset(visit,0,sizeof(visit));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(i=0;i<total;i++){
        cin>>c1>>c2;
        arr[c1-1][c2-1]=1;
        arr[c2-1][c1-1]=1;
    }
    q.push(0);
    visit[0]=1;
    while(!q.empty()){
        j=q.front();
        q.pop();
        for(i=0;i<n;i++){
            if(arr[j][i]==1&&visit[i]==0){
                q.push(i);
                count++;
                visit[i]=1;
            }
        }
    }
    cout<<count<<endl;
}
