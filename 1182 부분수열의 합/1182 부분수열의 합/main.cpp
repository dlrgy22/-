#include<iostream>
using namespace std;
int s,n,c=0;
void check(int *arr,int sum,int num){
    if(num==n)
        return;
    sum+=arr[num];
    if(sum==s)
        c+=1;
    check(arr,sum,num+1);
    sum-=arr[num];
    check(arr,sum,num+1);
}
int main(){
    int i;
    cin>>n>>s;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    check(arr,0,0);
    cout<<c<<endl;
}
