#include<iostream>
#include<vector>
#include<string.h>
//중복조합 : 작은 수 부터 차례대로
using namespace std;
int c=0,num;
vector<int> v;
int visit[1000];
void check(int *arr,int count,int sum,int number){
    int i;
    if(count==num){
        if(visit[sum-1]==1){
            return;
        }
        else{
            visit[sum-1]=1;
            c+=1;
            return;
        }
    }
    for(i=number;i<4;i++){
        check(arr,count+1,sum+arr[i],i);
    }
}
int main(){
    int arr[4]={1,5,10,50};
    memset(visit,0,sizeof(visit));
    cin>>num;
    check(arr,0,0,0);
    cout<<c;
}

