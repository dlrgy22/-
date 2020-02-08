#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int main(){
    int i,j,n,m,g1,g2,count=0;
    queue<int> q;
    cin>>n>>m;
    int graph[n][n],visit[n];
    memset(visit,0,sizeof(visit));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            graph[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        cin>>g1>>g2;
        graph[g1-1][g2-1]=1;
        graph[g2-1][g1-1]=1;
    }
    for(i=0;i<n;i++){
        if(visit[i]==0){
            visit[i]=1;
            count++;
            q.push(i);
            while(!q.empty()){
                for(j=0;j<n;j++){
                    if(graph[q.front()][j]==1&&visit[j]==0){
                        q.push(j);
                        visit[j]=1;
                    }
                }
                q.pop();
            }
        }
    }
    cout<<count<<endl;
}
