#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;
int island[50][50];
void bfs(int w,int h){
    int count=0;
    pair<int,int> p;
    queue<pair<int,int>> q;
    int i,j,k,visit[50][50];
    int dx[8]={1,1,1,0,0,-1,-1,-1};
    int dy[8]={1,0,-1,1,-1,1,0,-1};
    memset(visit,0,sizeof(visit));
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(island[i][j]==1&&visit[i][j]==0){
                count++;
                visit[i][j]=1;
                p=make_pair(i,j);
                q.push(p);
                while(!q.empty()){
                    for(k=0;k<8;k++){
                        int x=q.front().first+dx[k];
                        int y=q.front().second+dy[k];
                        if(x<0||x>=h||y<0||y>=w)
                            continue;
                        if(island[x][y]==1&&visit[x][y]==0){
                            p=make_pair(x,y);
                            q.push(p);
                            visit[x][y]=1;
                        }
                        q.pop();
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int w,h;
    while(1){
        cin>>w>>h;
        if(w==0&&h==0)
            break;
        int i,j;
        for(i=0;i<50;i++){
            for(j=0;j<50;j++){
                island[i][j]=0;
            }
        }
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                cin>>island[i][j];
            }
        }
        bfs(w,h);
    }
}
