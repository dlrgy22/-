#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int num,arr[1001],dec[700],i,j,k=0;
    memset(arr,0,sizeof(arr));
    memset(dec,1001,sizeof(dec));
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<=1000;i++){
        if(arr[i]==0){
            dec[k]=i;
            k++;
            for(j=1;i*j<=1000;j++){
                arr[i*j]=1;
            }
        }
    }
    cin>>num;
    int ring[num],re;
    for(i=0;i<num;i++){
        cin>>ring[i];
    }
    for(i=1;i<num;i++){
        re=ring[0];
        for(j=0;dec[j]<=re&&dec[j]<=ring[i];j++){
            if(re%dec[j]==0&&ring[i]%dec[j]==0){
                re=re/dec[j];
                ring[i]/=dec[j];
                j--;
            }
        }
        cout<<re<<'/'<<ring[i]<<endl;
    }
}
