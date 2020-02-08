#include<stdio.h>
int num;
void find(int *arr,int num){
    for(;num>=1;num--){
        if(arr[num-1]>arr[num]+1){
            arr[num-1]=arr[num]+1;
        }
        if(num%2==0&&arr[num/2]>arr[num]+1){
            arr[num/2]=arr[num]+1;
        }
        if(num%3==0&&arr[num/3]>arr[num]+1){
            arr[num/3]=arr[num]+1;
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num+1];
    arr[num]=0;
    for(int i=1;i<num;i++){
        arr[i]=num;
    }
    find(arr,num);
    printf("%d\n",arr[1]);
}
