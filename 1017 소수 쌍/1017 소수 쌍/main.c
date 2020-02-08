#include<stdio.h>
int result[50];
int a=0;
typedef struct{
    int num;
    int count;
    int match;
}List;
void Insert(){
    int i,j;
    for(i=1;i<a;i++){
        int k=result[i];
        for(j=i;j>0;j--){
            if(k<result[j-1]){
                result[j]=result[j-1];
                if(j==1)
                    result[0]=k;
            }
            else{
                result[j]=k;
                break;
            }
        }
    }
    for(i=0;i<a;i++)
        printf("%d ",result[i]);
    printf("\n");
}
void makedec(List *list,int *deciaml,int n,int index){
    int i,j;
    if(list[index].count==1)
        makedec(list,deciaml,n,index+1);
    for(i=index;i<n;i++){
        if(list[i].count==0&&deciaml[list[index].num+list[i].num]==1){
            list[index].count=1;
            list[i].count=1;
            list[index].match=list[i-1].num;
            for(j=0;j<n;j++){
                if(list[j].count==0)
                    break;
            }
            if(j==n&&result[a-1]!=list[0].match){
                result[a]=list[0].match;
                a++;
            }
            makedec(list,deciaml,n,index+1);
            list[i].count=0;
            list[index].match=0;
        }
    }
}
int main(){
    int n,i,j,decimal[1001];
    for(i=0;i<1001;i++){
        decimal[i]=0;
    }
    for(i=2;i<1001;i++){
        if(decimal[i]==0){
            for(j=2;i*j<1001;j++){
                decimal[i*j]=1;
            }
        }
    }
    scanf("%d",&n);
    List list[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&list[i].num);
        list[i].count=0;
        list[i].match=0;
    }
    makedec(list,decimal,n,0);
    if(a!=0)
        Insert();
    else
        printf("-1");
}
