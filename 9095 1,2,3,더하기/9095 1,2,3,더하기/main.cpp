#include <iostream>
int c=0;
using namespace std;
void result(int number,int n){
    number+=1;
    if(number>=n){
        if(number==n)
            c+=1;
        return;
    }
    result(number,n);
    number-=1;
    number+=2;
    if(number>=n){
        if(number==n)
            c+=1;
        return;
    }
    result(number,n);
    number-=2;
    number+=3;
    if(number>=n){
        if(number==n)
            c+=1;
        return;
    }
    result(number,n);
    number-=3;
}
int main(){
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++){
        c=0;
        cin>>n;
        int number=0;
        result(number,n);
        cout<<c<<endl;
    }
}
