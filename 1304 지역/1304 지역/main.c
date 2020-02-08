#include<stdio.h>
#include<stdlib.h>
typedef struct City{
    struct City *road;
    int count;
}City;
int main(){
    int n,m,i;
    scanf("%d%d",&n,&m);
    int start[m],end[m];
    City* city=(City*)malloc(sizeof(*city)*(n+1));
    for(i=1;i<n;i++){
        city[i].road[i+1]=city[i+1];
    }
    for(i=0;i<m;i++){
        scanf("%d%d",&start[i],&end[i]);
        city[start[i]].road[end[i]]=city[end[i]];
    }
}
