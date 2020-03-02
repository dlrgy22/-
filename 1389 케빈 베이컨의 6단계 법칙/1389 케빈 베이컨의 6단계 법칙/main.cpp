#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct sum{
    int sum=0;
    int num=0;
}Sum;
bool compare(Sum a,Sum b){
    if(a.sum==b.sum)
        return a.num<b.num;
    else
        return a.sum<b.sum;
}
int main(){
    int n,m;
    vector<Sum> v;
    cin>>n>>m;
    int people[n+1][n+1],i,j,p1,p2;
    for(i=1;i<=n;i++){
        for(j=0;j<=n;j++){
            people[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        cin>>p1>>p2;
        people[p1][p2]=1;
        people[p2][p1]=1;
    }
    for(i=1;i<=n;i++){
        int visit[n+1],count[n+1];
        Sum sum;
        queue<int> q;
        memset(visit,0,sizeof(visit));
        memset(count,0,sizeof(count));
        visit[i]=1;
        q.push(i);
        while(!q.empty()){
            for(j=1;j<=n;j++){
                if(visit[j]==0&&people[q.front()][j]==1){
                    visit[j]=1;
                    count[j]=count[q.front()]+1;
                    q.push(j);
                }
            }
            q.pop();
        }
        for(j=1;j<=n;j++){
            sum.sum+=count[j];
        }
        sum.num=i;
        v.push_back(sum);
    }
    sort(v.begin(),v.end(),compare);
    cout<<v[0].num<<endl;
}
