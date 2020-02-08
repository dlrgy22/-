#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int i;
    int sum=0,count=0;
    string num;
    cin>>num;
    for(i=0;i<num.size();i++){
        sum+=num[i]-'0';
        if(num[i]=='0')
            count++;
    }
    if(sum%3!=0||count==0)
        cout<<-1;
    else{
        sort(num.begin(),num.end(),compare);
        cout<<num;
    }
}
