#include <iostream>
using namespace std;
int main(){
    int T,h,w,n,i;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>h>>w>>n;
        if(n%h!=0){
            if(n/h>=9)
                cout<<n%h<<n/h+1<<endl;
            else
                cout<<n%h<<'0'<<n/h+1<<endl;
        }
        else{
            if(n/h>=10)
                cout<<h<<n/h<<endl;
            else
                cout<<h<<'0'<<n/h<<endl;
        }
    }
}
