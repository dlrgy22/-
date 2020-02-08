#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i,j,k=0,n,arr[10001],dec[5000];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    arr[1]=1;
    cin>>t;
    for(i=2;i<=10000;i++){
        if(arr[i]==0){
            dec[k]=i;
            k++;
            for(j=1;i*j<=10000;j++){
                arr[i*j]=1;
            }
        }
    }
    for(i=0;i<t;i++){
        cin>>n;
        int re1=1,re2=10000;
        for(j=0;dec[j]<n;j++){
            for(k=j;dec[j]+dec[k]<=n;k++){
                if(dec[j]+dec[k]==n&&k-j<re2-re1){
                    re2=k;
                    re1=j;
                }
            }
        }
        cout<<dec[re1]<<' '<<dec[re2]<<endl;
    }
}
