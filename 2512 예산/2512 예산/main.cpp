#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long number,sum=0;
    cin>>number;
    long long i,j,money,large=0,result=0,num;
    vector<long long> arr;
    for(i=0;i<number;i++){
        cin>>num;
        arr.push_back(num);
        sum+=arr[i];
        large=max(large,arr[i]);
    }
    sort(arr.begin(),arr.end());
    cin>>money;
    if(sum<=money){
        cout<<large;
    }
    else{
        for(i=0;i<arr.size();i++){
            if(money>=arr[i]*(arr.size()-i)){
                result+=arr[i];
                for(j=i+1;j<arr.size();j++){
                    arr[j]-=arr[i];
                }
                money-=arr[i]*(arr.size()-i);
                arr[i]=0;
            }
            else{
                result+=money/(arr.size()-i);
                cout<<result;
                break;
            }
        }
    }
}
