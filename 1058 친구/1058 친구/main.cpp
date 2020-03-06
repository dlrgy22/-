#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,count=0,large=0;
    cin>>n;
    char f[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>f[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(f[i][j]=='Y')
                count++;
            else if(i!=j){
                for(k=0;k<n;k++){
                    if(f[j][k]=='Y'){
                        if(f[k][i]=='Y'){
                            count+=1;
                            break;
                        }
                    }
                }
            }
        }
        large=max(large,count);
        count=0;
    }
    cout<<large<<endl;
}
