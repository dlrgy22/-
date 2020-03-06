#include<iostream>
#include<queue>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n,j,count=0;
        cin>>n;
        int arr[n+1],visit[n+1];

        for(j=1;j<=n;j++){
            cin>>arr[j];
            visit[j]=0;
        }
        for(j=1;j<n;j++){
            if(visit[arr[j]]==0){
                queue<int> q;
                q.push(arr[j]);
                visit[arr[j]]=1;
                while(1){
                    int num=arr[q.front()];
                    if(visit[num]==1)
                        break;
                    else{
                        visit[num]=1;
                        q.push(num);
                    }
                    q.pop();
                }
                count+=1;
            }
        }
        cout<<count<<endl;
    }
}
