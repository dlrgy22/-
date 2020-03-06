#include<iostream>
using namespace std;
int main(){
    int n,kim,lim,count=0;
    cin>>n>>kim>>lim;
    while(kim!=lim){
        if(kim%2==0)
            kim=kim/2;
        else
            kim=kim/2+1;
        if(lim%2==0)
            lim=lim/2;
        else
            lim=lim/2+1;
        count+=1;
    }
    cout<<count<<endl;
}
