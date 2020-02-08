#include<iostream>
#include<queue>
using namespace std;
int main(){
    char game[12][6],color;
    int i,j,count=0;
    pair<int,int>p1=make_pair(i,j);
    queue<pair<int,int>> q;
    for(i=0;i<12;i++){
        for(j=0;j<6;j++){
            cin>>game[i][j];
        }
    }
    for(i=0;i<12;i++){
        for(j=0;j<6;i++){
            if(game[i][j]!='.'){
                color=game[i][j];
                p1=make_pair(i,j);
                q.push(p1);
                while(!q.empty()){
                    p1=q.front();
                    if(game[i][j-1]==color){
                        count+=1;
                        p1=make_pair(i+1,j);
                    }
                }
                
            }
        }
    }
}
