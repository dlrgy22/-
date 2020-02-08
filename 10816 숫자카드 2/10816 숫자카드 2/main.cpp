#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,m,i,num;
    unordered_map<int,int> M;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        M[num]+=1;
    }
    cin>>m;
    vector<int> result;
    for(i=0;i<m;i++){
        cin>>num;
        result.push_back(M[num]);
    }
    for(vector<int>::iterator iter=result.begin();iter!=result.end();iter++){
        cout<<*iter<<' ';
    }
}
