#include<stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    for(i=0;i<n;i++){
        if(arr[i]=='L')
            count++;
    }
    if(count==0)
        printf("%d",n);
    else
        printf("%d",n+1-(count/2));
}
