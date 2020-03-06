#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int n,m,i,j,num1,num2,max=0;
    scanf("%d%d",&n,&m);
    vector<int> vec[10001];
    int visit[n+1],count;
    memset(visit,0,sizeof(visit));
    for(i=0;i<m;i++){
        scanf("%d%d",&num1,&num2);
        vec[num2].push_back(num1);
    }
    queue<int> q;
    vector<int> v;
    for(i=1;i<=n;i++){
        count=0;
        visit[i]=1;
        q.push(i);
        count+=1;
        while(!q.empty()){
            for(j=0;j<vec[q.front()].size();j++){
                if(visit[vec[q.front()][j]]==0){
                    count+=1;
                    visit[vec[q.front()][j]]=1;
                    q.push(vec[q.front()][j]);
                }
            }
            q.pop();
        }
        if(count>max){
            max=count;
            v.clear();
            v.push_back(i);
        }
        else if(count==max)
            v.push_back(i);
        memset(visit,0,sizeof(visit));
    }
    for(i=0;i<v.size();i++){
        printf("%d ",v[i]);
    }
}
