#include<stdio.h>
int main(){
    int c,n,i,j;
    double avg,over;
    scanf("%d",&c);
    for(i=0;i<c;i++){
        avg=0;
        over=0;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++){
            scanf("%d",&arr[j]);
            avg+=arr[j];
        }
        avg/=n;
        for(j=0;j<n;j++){
            if(arr[j]>avg)
                over++;
        }
        printf("%.3f%%\n",over/n*100);
    }
}
