#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,num,sum,result=-2000;
    cin>>n;
    vector<int> vec;
    for(i=0;i<n;i++){
        scanf("%d",&num);
        vec.push_back(num);
    }
    sum=vec[0];
    for(vector<int>::size_type i = 1;i<vec.size();i++){
        if(sum>=0){
            if(result<sum+vec[i]){
                result=sum+vec[i];
            }
            sum+=vec[i];
        }
        else {
            if(result<sum+vec[i]){
                result=sum+vec[i];
            }
            sum=vec[i];
        }
    }
    cout<<result;
}
