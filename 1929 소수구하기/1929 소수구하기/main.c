#include<stdio.h>
#include<time.h>
int main(){
    int m,n,i,j;
    clock_t start,end;
    start = clock();
    int arr[1000000];
    scanf("%d%d",&m,&n);
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<=1000000;i++){
        arr[i]=0;
    }
    for(i=2;i<=n;i++){
        if(arr[i]==0){
            for(j=2;i*j<=n;j++){
                arr[i*j]=1;
            }
        }
    }
    for(i=m;i<=n;i++){
        if(arr[i]==0)
            printf("%d\n",i);
    }
}
