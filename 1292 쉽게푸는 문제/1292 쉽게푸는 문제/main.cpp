#include<iostream>
using namespace std;
int main(){
    int count=0,arr[1000],i,j,num1,num2,sum=0;
    for(i=1;i<=45;i++){
        for(j=0;j<i;j++){
            arr[count]=i;
            count+=1;
            if(count==1000)
                break;
        }
    }
    cin>>num1>>num2;
    for(i=num1-1;i<num2;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
