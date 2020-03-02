#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,less<int>> pq;
    int t,num,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        if(num==0){
            if(pq.empty())
                printf("%d\n",0);
            else{
                printf("%d\n",pq.top());
                pq.pop();
            }
        }
        else if(num>0){
            pq.push(num);
        }
    }
}
