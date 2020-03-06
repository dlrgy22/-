#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i,result=0;
    cin>>n>>m;
    int six,one,minsix=1001,minone=1001;
    for(i=0;i<m;i++){
        cin>>six>>one;
        if(minsix>six)
            minsix=six;
        if(minone>one)
            minone=one;
    }
    if(minsix>=minone*6)
        result=minone*n;
    else if(minsix<(n%6)*minone&&n%6!=0)
        result=minsix*(n/6+1);
    else if(minsix<(n%6)*minone&&n%6==0)
        result=minsix*(n/6);
    else
        result=minsix*(n/6)+minone*(n%6);
    cout<<result<<endl;
}
