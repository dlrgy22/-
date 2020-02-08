#include<stdio.h>
#include<math.h>
int main(){
    long long max,min;
    scanf("%lld%lld",&min,&max);
    int n=pow(max,0.5);
    int arr[1000001],i,j,squ,count=0,size=max-min+1;
    int num[size];
    for(i=0;i<size;i++){
        num[i]=0;
    }
    arr[1]=1;
    arr[2]=1;
    for(i=2;i<1000001;i++){
        arr[i]=0;
    }
    for(i=2;i<=n;i++){
        if(arr[i]==0){
            for(j=2;i*j<=n;j++){
                arr[i*j]=1;
            }
        }
    }
    for(i=2;i<=n;i++){
        if(arr[i]==0){
            squ=pow(i,2.0);
            for(j=1;j*squ<=max;j++){
                if(j*squ>=min&&num[max-j*squ]==0){
                    num[max-j*squ]=1;
                }
            }
        }
    }
    for(i=0;i<size;i++){
        if(num[i]==0){
            count++;
        }
    }
    printf("%d",count);
}

