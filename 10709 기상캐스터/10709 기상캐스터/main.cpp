#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n>>m;
    char arr[n][m];
    int time[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]=='c'){
                time[i][j]=0;
                cout<<'0'<<' ';
            }
            else if(j==0||time[i][j-1]==-1){
                time[i][j]=-1;
                cout<<-1<<' ';
            }
            else{
                time[i][j]=time[i][j-1]+1;
                cout<<time[i][j]<<' ';
            }
        }
        cout<<endl;
    }
}
