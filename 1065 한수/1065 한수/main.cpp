#include<iostream>
using namespace std;
int main(){
    int i,n,arr[3],count=99;
    cin>>n;
    if(n<100)
        cout<<n<<endl;
    else{
        for(i=100;i<=n;i++){
            arr[0]=i/100;
            arr[1]=(i%100)/10;
            arr[2]=(i%10);
            if((arr[0]-arr[1])==(arr[1]-arr[2]))
                count++;
        }
        cout<<count<<endl;
    }
}
