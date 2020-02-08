#include<iostream>
using namespace std;
char chess1[8][8],chess2[8][8];
int main(){
    int m,n,i,j,k,l,count1=0,count2=0,result=64;
    cin>>m>>n;
    char arr[m][n];
    for(i=0;i<m;i++){
        getchar();
        for(j=0;j<n;j++){
            scanf("%c",&arr[i][j]);
        }
    }
    for(i=0;i<8;i++){
        if(i==0){
            chess1[i][0]='W';
            chess2[i][0]='B';
        }
        else{
            if(chess1[i-1][0]=='W')
                chess1[i][0]='B';
            else
                chess1[i][0]='W';
            if(chess2[i-1][0]=='W')
                chess2[i][0]='B';
            else
                chess2[i][0]='W';
            }
            for(j=1;j<8;j++){
                if(chess1[i][j-1]=='W')
                    chess1[i][j]='B';
                else
                    chess1[i][j]='W';
            
                if(chess2[i][j-1]=='W')
                    chess2[i][j]='B';
                else
                    chess2[i][j]='W';
        }
    }
    for(i=0;i<=m-8;i++){
        for(j=0;j<=n-8;j++){
            for(k=0;k<8;k++){
                for(l=0;l<8;l++){
                    if(arr[i+k][j+l]!=chess1[k][l])
                        count1++;
                    if(arr[i+k][j+l]!=chess2[k][l])
                        count2++;
                }
            }
            if(count1<count2){
                if(count1<result)
                    result=count1;
            }
            else{
                if(count2<result)
                    result=count2;
            }
            count1=0;
            count2=0;
        }
    }
    cout<<result<<endl;
}
