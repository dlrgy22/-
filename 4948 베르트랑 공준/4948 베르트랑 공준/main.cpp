#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int num,i,j;
    int arr[246913];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<246913;i++){
        if(arr[i]==0){
            for(j=2;i*j<246913;j++){
                arr[i*j]=1;
            }
        }
    }
    while(1){
        int count=0;
        cin>>num;
        if(num==0)
            break;
        for(i=num+1;i<=2*num;i++){
            if(arr[i]==0)
                count++;
        }
        cout<<count<<endl;
    }
}
