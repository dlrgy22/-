#include<iostream>
#include<queue>
using namespace std;
typedef struct location{
    int x;
    int y;
}Location;
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int m,n,k,j,l,x,y,count=0;
        queue<Location> q;
        Location location;
        cin>>m>>n>>k;
        int arr[n][m];
        for(j=0;j<n;j++){
            for(l=0;l<m;l++){
                arr[j][l]=0;
            }
        }
        for(j=0;j<k;j++){
            cin>>x>>y;
            arr[y][x]=1;
        }
        for(j=0;j<n;j++){
            for(l=0;l<m;l++){
                if(arr[j][l]==1){
                    location.x=l;
                    location.y=j;
                    q.push(location);
                    arr[location.y][location.x]=0;
                    while(!q.empty()){
                        if(arr[q.front().y+1][q.front().x]==1&&q.front().y<n-1){
                            location.y=q.front().y+1;
                            location.x=q.front().x;
                            arr[q.front().y+1][q.front().x]=0;
                            q.push(location);
                        }
                        if(arr[q.front().y][q.front().x+1]==1&&q.front().x<m-1){
                            location.y=q.front().y;
                            location.x=q.front().x+1;
                            arr[q.front().y][q.front().x+1]=0;
                            q.push(location);

                        }
                        if(arr[q.front().y-1][q.front().x]==1&&q.front().y>0){
                            location.y=q.front().y-1;
                            location.x=q.front().x;
                            arr[q.front().y-1][q.front().x]=0;
                            q.push(location);

                        }
                        if(arr[q.front().y][q.front().x-1]==1&&q.front().x>0){
                            location.y=q.front().y;
                            location.x=q.front().x-1;
                            arr[q.front().y][q.front().x-1]=0;
                            q.push(location);
                        }
                        q.pop();
                    }
                    count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
}
