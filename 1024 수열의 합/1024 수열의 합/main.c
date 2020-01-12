#include<stdio.h>
void print(int num,int l){
    for(int i=0;i<l;i++){
        printf("%d ",num);
        num++;
    }
}
int main(){
    int n,l,num;
    scanf("%d%d",&n,&l);
    while(l<=100){
        if(l%2==0){
            if(n%l==l/2){
                num=n/l-l/2+1;
                if(num>=0){
                    print(num,l);
                    break;
                }
            }
            l+=1;
        }
        else{
            if(n%l==0){
                num=n/l-l/2;
                if(num>=0){
                    print(num,l);
                    break;
                }
            }
            l+=1;
        }
    }
    if(l>100)
        printf("-1");
}
