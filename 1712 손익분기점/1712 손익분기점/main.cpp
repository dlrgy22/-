#include<iostream>
using namespace std;
int main(){
    long long a,b,c,result;
    cin >>a>>b>>c;
    result=a/(c-b)+1;
    if(c<=b)
        result=-1;
    cout<<result;
}
