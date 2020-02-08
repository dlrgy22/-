#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int res=1000000;
void add(int sum,int *coin,int count,int n,int result){
    int i;
    for(i=0;i<n;i++){
        if(count>=result)
            break;
        sum+=coin[i];
        count+=1;
        if(sum>=result){
            if(sum==result){
                res=count;
            }
            break;
        }
        add(sum,coin,count,n,result);
        count-=1;
        sum-=coin[i];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,result,sum=0,count=0;
    cin>>n>>result;
    int coin[n];
    for(i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin,coin+n);
    add(sum,coin,count,n,result);
    if(res>=10001)
        cout<<-1<<endl;
    else
        cout<<res<<endl;
}
