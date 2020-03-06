#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,arr[n],sum=0,result=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+sizeof(arr)/sizeof(int));
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        result+=sum;
    }
    cout<<result;
}
