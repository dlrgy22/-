#include<stdio.h>
#include<math.h>
void distance(){
    double x1,x2,y1,y2,r1,r2,dis;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);
    double a=fabs(r1-r2);
    dis=pow(pow(x1-x2,2.0)+pow(y1-y2,2.0),0.5);
    if(dis>r1+r2)
        printf("0");
    else if(dis==r1+r2)
        printf("1");
    else if(dis<r1+r2){
        if(dis==0){
            if(r1==r2)
                printf("-1");
            else
                printf("0");
        }
        else if(dis==a)
            printf("1");
        else if(a>dis)
            printf("0");
        else
            printf("2");
    }
    
}
int main(){
    int testcase,i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
        distance();
        printf("\n");
    }
}
