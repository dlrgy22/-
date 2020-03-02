#include<iostream>
#include<queue>
using namespace std;
typedef struct location{
    int h;
    int w;
}Location;
int main(){
    int w,h;
    while(1){
        cin>>w>>h;
        if(w==0&&h==0)
            break;
        int island[h][w],i,j;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                cin>>island[i][j];
                
            }
        }
        Location l;
        queue<Location> q;
        int count = 0;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(island[i][j]==1){
                    l.h=i;
                    l.w=j;
                    q.push(l);
                    island[i][j]=0;
                    while(!q.empty()){
                        if(island[q.front().h+1][q.front().w]==1&&q.front().h<h-1){
                            island[q.front().h+1][q.front().w]=0;
                            l.h=q.front().h+1;
                            l.w=q.front().w;
                            q.push(l);
                        }
                        if(island[q.front().h-1][q.front().w]==1&&q.front().h>0){
                            island[q.front().h-1][q.front().w]=0;
                            l.h=q.front().h-1;
                            l.w=q.front().w;
                            q.push(l);
                        }
                        if(island[q.front().h][q.front().w+1]==1&&q.front().w<w-1){
                            
                            island[q.front().h][q.front().w+1]=0;
                            l.h=q.front().h;
                            l.w=q.front().w+1;
                            q.push(l);
                        }
                        if(island[q.front().h][q.front().w-1]==1&&q.front().w>0){
                            island[q.front().h][q.front().w-1]=0;
                            l.h=q.front().h;
                            l.w=q.front().w-1;
                            q.push(l);
                        }
                        if(island[q.front().h+1][q.front().w+1]==1&&q.front().h<h-1&&q.front().w<w-1){
                            island[q.front().h+1][q.front().w+1]=0;
                            l.h=q.front().h+1;
                            l.w=q.front().w+1;
                            q.push(l);
                        }
                        if(island[q.front().h-1][q.front().w-1]==1&&q.front().h>0&&q.front().w>0){
                            island[q.front().h-1][q.front().w-1]=0;
                            l.h=q.front().h-1;
                            l.w=q.front().w-1;
                            q.push(l);
                        }
                        if(island[q.front().h+1][q.front().w-1]==1&&q.front().h<h-1&&q.front().w>0){
                            island[q.front().h+1][q.front().w-1]=0;
                            l.h=q.front().h+1;
                            l.w=q.front().w-1;
                            q.push(l);
                        }
                        if(island[q.front().h-1][q.front().w+1]==1&&q.front().h>0&&q.front().w<w-1){
                            island[q.front().h-1][q.front().w+1]=0;
                            l.h=q.front().h-1;
                            l.w=q.front().w+1;
                            q.push(l);
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
