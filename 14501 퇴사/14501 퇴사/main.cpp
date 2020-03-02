#include<iostream>
using namespace std;
typedef struct consulting{
    int time=1;
    int price=0;
}Consulting;
int n,large=0;
void count(Consulting *consult,int number,int money){
    if(consult[number].time+number<=n){
        money+=consult[number].price;
        count(consult,number+consult[number].time,money);
        money-=consult[number].price;
        count(consult,number+1,money);
    }
    if(money>large){
        large=money;
    }
}
int main(){
    int i;
    cin>>n;
    Consulting consult[n+1];
    for(i=0;i<n;i++){
        cin>>consult[i].time>>consult[i].price;
    }
    count(consult,0,0);
    cout<<large<<endl;
}
