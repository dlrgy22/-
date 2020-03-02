#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(){
    int num,n,i,sum=0,result=0;
    cin>>num;
    vector<int> v;
    for(i=0;i<num;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    do{
        for(i=1;i<num;i++){
            sum+=abs(v[i-1]-v[i]);
        }
        if(sum>result){
            result=sum;
        }
        sum=0;
    }while(next_permutation(v.begin(),v.end()));
    cout<<result<<endl;
}
