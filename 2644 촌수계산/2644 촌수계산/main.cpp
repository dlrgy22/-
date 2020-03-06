#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int main(){
    int num,p1,p2,total,i,j,rel1,rel2;
    cin>>num;
    cin>>p1>>p2;
    cin>>total;
    int arr[num+1][num+1],visit[num+1],count[num+1];
    for(i=0;i<=num;i++){
        for(j=0;j<=num;j++){
            arr[i][j]=0;
        }
    }
    memset(visit,0,sizeof(visit));
    memset(count,0,sizeof(count));
    for(i=0;i<total;i++){
        cin>>rel1>>rel2;
        arr[rel1][rel2]=1;
        arr[rel2][rel1]=1;
    }
    queue<int> q;
    q.push(p1);
    visit[p1]=1;
    while(!q.empty()){
        for(i=0;i<=num;i++){
            if(arr[q.front()][i]==1&&visit[i]==0){
                q.push(i);
                visit[i]=1;
                count[i]=count[q.front()]+1;
            }
        }
        if(count[p2]!=0)
            break;
        q.pop();
    }
    if(count[p2]==0)
        cout<<-1<<endl;
    else
        cout<<count[p2]<<endl;
}
