#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int number,num,i,j,broken[10];
    cin>>number;
    cin>>num;
    
    memset(broken,0,sizeof(broken));
    if(num>0){
        for(i=0;i<num;i++)
            broken[num]=1;
    }
    int channel=number;
    vector<int> v;
    while(channel!=0){
        v.push_back(channel%10);
        channel/=10;
    }
}
