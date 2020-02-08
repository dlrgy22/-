#include<iostream>
using namespace std;
int main(){
    int n,i,j,result=-1;
    cin>>n;
    for(i=0;i*5<=n;i++){
        if(i*5==n)
            result=i;
    }
    if(result==-1){
        for(;i>=0;i--){
            for(j=0;i*5+j*3<=n;j++){
                if(i*5+j*3==n){
                    result=i+j;
                    break;
                }
            }
            if(result!=-1)
                break;
        }
    }
    cout<<result;
}

