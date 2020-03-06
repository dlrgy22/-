#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,i,j,number,root,num;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        cin>>number;
        if(number==-1)
            root=i;
        else{
            arr[number][i]=1;
        }
    }
    cin>>num;
    for(i=0;i<n;i++){
        arr[num][i]=0;
        arr[i][num]=0;
    }
    queue<int> q;
    q.push(root);
    int result=0;
    while(!q.empty()){
        int count=0;
        for(i=0;i<n;i++){
            if(arr[q.front()][i]==1){
                count+=1;
                q.push(i);
            }
        }
        if(count==0)
            result+=1;
        q.pop();
    }
    if(num==root)
        result=0;
    cout<<result<<endl;
}
