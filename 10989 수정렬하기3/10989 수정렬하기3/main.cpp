#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,i,num;
    vector<int> number;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        number.push_back(num);
    }
    sort(number.begin(),number.end());
    for(i=0;i<n;i++)
        cout<<number[i]<<endl;
}
