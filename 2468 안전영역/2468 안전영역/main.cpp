#include<iostream>
#include<queue>
using namespace std;
typedef struct location{
    int x;
    int y;
}Location;
int main(){
    int n,i,j,k;
    cin>>n;
    int arr[n][n],count=0,large=0,big=0,visit[n][n];
    queue<Location> q;
    Location location;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
            visit[i][j]=0;
            big=max(big,arr[i][j]);
        }
    }
    for(i=0;i<=big;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(arr[j][k]>i&&visit[j][k]==0){
                    location.y=k;
                    location.x=j;
                    visit[j][k]=1;
                    q.push(location);
                    while(!q.empty()){
                        if(arr[q.front().x+1][q.front().y]>i&&visit[q.front().x+1][q.front().y]==0&&q.front().x<n-1){
                            visit[q.front().x+1][q.front().y]=1;
                            location.x=q.front().x+1;
                            location.y=q.front().y;
                            q.push(location);
                        }
                        if(arr[q.front().x][q.front().y+1]>i&&visit[q.front().x][q.front().y+1]==0&&q.front().y<n-1){
                            visit[q.front().x][q.front().y+1]=1;
                            location.x=q.front().x;
                            location.y=q.front().y+1;
                            q.push(location);
                        }
                        if(arr[q.front().x-1][q.front().y]>i&&visit[q.front().x-1][q.front().y]==0&&q.front().x>0){
                            visit[q.front().x-1][q.front().y]=1;
                            location.x=q.front().x-1;
                            location.y=q.front().y;
                            q.push(location);
                        }
                        if(arr[q.front().x][q.front().y-1]>i&&visit[q.front().x][q.front().y-1]==0&&q.front().y>0){
                            visit[q.front().x][q.front().y-1]=1;
                            location.x=q.front().x;
                            location.y=q.front().y-1;
                            q.push(location);
                        }
                        q.pop();
                    }
                    count+=1;
                }
            }
        }
        large=max(count,large);
        count=0;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                visit[j][k]=0;
            }
        }
    }
    cout<<large<<endl;
}
