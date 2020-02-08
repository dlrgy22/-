#include<stdio.h>
#include<stdlib.h>
int count=0;
void marble(int *arr,int kind1,int kind2,int kind3,int kind4,int kind5,int sum,int a){
    int i;
    int mar[5]={kind1,kind2,kind3,kind4,kind5};
    for(i=0;i<5;i++){
        if(mar[i]!=0&&arr[a-2]!=i&&arr[a-1]!=i){
            arr[a]=i;
            mar[i]-=1;
            for(i=0;i<sum+2;i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            if(a==sum+1){
                count+=1;
                break;
            }
            marble(arr,mar[0],mar[1],mar[2],mar[3],mar[4],sum,a+1);
            mar[i]+=1;
        }
    }
    printf("1\n");
}
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    int kind[5];
    for(i=0;i<5;i++){
        kind[i]=0;
    }
    for(i=0;i<num;i++){
        scanf("%d",&kind[i]);
        sum+=kind[i];
    }
    int arr[sum+2];
    for(i=0;i<sum+2;i++){
        arr[i]=100;
    }
    marble(arr,kind[0],kind[1],kind[2],kind[3],kind[4],sum,2);
    printf("%d",count);
    
}

