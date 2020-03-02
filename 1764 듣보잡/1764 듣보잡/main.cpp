#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m,i,count=0;
    cin>>n>>m;
    string s;
    vector<string> result,s1;
    for(i=0;i<n;i++){
        cin>>s;
        s1.push_back(s);
    }
    sort(s1.begin(),s1.end());
    for(i=0;i<m;i++){
        cin>>s;
        if(binary_search(s1.begin(),s1.end(),s)){
            count+=1;
            result.push_back(s);
        }
    }
    sort(result.begin(),result.end());
    cout<<count<<endl;
    for(i=0;i<count;i++){
        cout<<result[i]<<endl;
    }
}
