#include <iostream>
#include<math.h>
using namespace std;
int main(){
    long long num,result=0;
    int i;
    cin>>num;
    for(i=0;i<10;i++){
        if(num<pow(10,i)){
            break;
        }
    }
    i-=1;
    result+=(num-pow(10,i)+1)*(i+1);
    for(;i>0;i--){
        result+=(pow(10,i)-pow(10,i-1))*(i);
    }
    cout<<result;
}
