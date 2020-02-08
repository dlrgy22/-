#include <string.h>
#include <iostream>
using namespace std;
int arr[20][20],c=0,result=100000;
bool check(int j,int k,int *num){
    int i,count=0;
    for(i=0;i<=c;i++){
        if(num[i]==j||num[i]==k){
            count++;
        }
    }
    if(count==2)
        return true;
    else
        return false;
}
bool check2(int j,int k,int *num){
    int i,count=0;
    for(i=0;i<=c;i++){
        if(num[i]!=j||num[i]!=k){
            count++;
        }
    }
    if(count==2)
        return true;
    else
        return false;
}
void pick(int n,int i,int *num){
    int j,k,sum=0,all=0;
    for(;i<n;i++){
        num[c]=i;
        c+=1;
        if(c==(n/2)){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(check(j,k,num)){
                        sum+=arr[j][k];
                    }
                    else if(check2(j,k,num)){
                        all+=arr[j][k];
                    }
                }
            }
            if(result>abs(all-2*sum)){
                result=abs(all-2*sum);
            }
        }
        else{
            pick(n,i+1,num);
            c-=1;
        }
    }
    
}
int main(){
    int n,i,j,num[10];
    memset(num,-1,sizeof(num));
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    pick(n,0,num);
    cout<<result<<endl;
}
