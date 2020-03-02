#include<iostream>
#include<queue>
//bfs 는 queue에 push하기전에 미리 체크
typedef struct location{
    int x;
    int y;
    int dis;
}Location;
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n>>m;
    Location location;
    queue<Location> q;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    location.x=0;
    location.y=0;
    location.dis=1;
    q.push(location);
    while(!q.empty()){
        if(arr[q.front().y+1][q.front().x]==1&&q.front().y<n-1){
            location.y=q.front().y+1;
            location.x=q.front().x;
            location.dis=q.front().dis+1;
            arr[q.front().y+1][q.front().x]=0;
            if(location.y==n-1&&location.x==m-1){
                break;
            }
            q.push(location);
        }
        if(arr[q.front().y][q.front().x+1]==1&&q.front().x<m-1){
            location.y=q.front().y;
            location.x=q.front().x+1;
            location.dis=q.front().dis+1;
            arr[q.front().y][q.front().x+1]=0;
            if(location.y==n-1&&location.x==m-1){
                break;
            }
            q.push(location);
        }
        if(arr[q.front().y-1][q.front().x]==1&&q.front().y>0){
            location.y=q.front().y-1;
            location.x=q.front().x;
            location.dis=q.front().dis+1;
            arr[q.front().y-1][q.front().x]=0;
            if(location.y==n-1&&location.x==m-1){
                break;
            }
            q.push(location);
        }
        if(arr[q.front().y][q.front().x-1]==1&&q.front().x>0){
            location.y=q.front().y;
            location.x=q.front().x-1;
            location.dis=q.front().dis+1;
            arr[q.front().y][q.front().x-1]=0;
            if(location.y==n-1&&location.x==m-1){
                break;
            }
            q.push(location);
        }
        q.pop();
    }
    cout<<location.dis<<endl;
}
