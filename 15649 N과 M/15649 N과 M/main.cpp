#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int n,m,c=0;
void check(vector<int> v,int *arr){
    int i,j;
    if(v.size()==m)
        return;
    for(i=1;i<=n;i++){
        if(arr[i]==0){
            arr[i]=1;
            v.push_back(i);
            if(v.size()==m){
                for(j=0;j<v.size();j++){
                    printf("%d ",v[j]);
                }
                printf("\n");
            }
            check(v,arr);
            v.pop_back();
            arr[i]=0;
        }
    }
}
int main(){
    cin>>n>>m;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    vector<int> v;
    check(v,arr);
}
