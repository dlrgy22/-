#include<iostream>
using namespace std;
int main(){
    long long a,b,v,day;
    cin>>a>>b>>v;
    day=a-b;
    if((v-a)%day==0){
        cout<<(v-a)/day+1;
    }
    else
        cout<<(v-a)/day+2;
}
