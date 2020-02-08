#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,i;
    string l;
    vector<char> ch;
    cin>>l;
    for(i=0;l[i]!=NULL;i++){
        ch.push_back(l[i]);
    }
    for(vector<char>::iterator iter=ch.begin();iter!=ch.end();iter++){
        cout<<*iter<<endl;
    }
    
}
