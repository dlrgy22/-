#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,num,x1,x2,y1,y2,result;
    scanf("%d%d",&n,&m);
    int sum[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&num);
            if(i==0&&j==0)
                sum[i][j]=num;
            else if(i==0)
                sum[i][j]=sum[i][j-1]+num;
            else if(j==0)
                sum[i][j]=sum[i-1][j]+num;
            else
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+num;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        result=sum[x2-1][y2-1];
        if(x1==1&&y1==1)
            result+=0;
        else if(x1-2>=0&&y1==1)
            result-=sum[x1-2][y2-1];
        else if(y1-2>=0&&x1==1)
            result-=sum[x2-1][y1-2];
        else{
            result=result-sum[x1-2][y2-1]-sum[x2-1][y1-2]+sum[x1-2][y1-2];
        }
        printf("%d\n",result);
    }
}
