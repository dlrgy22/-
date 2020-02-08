#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
typedef struct people{
    int age;
    string name;
    int num;
}people;
bool cmp(const people p1,const people p2){
    if(p1.age<p2.age){
        return true;
    }
    else if(p1.age==p2.age){
        return p1.num<p2.num;
    }
    else
        return false;
}
int main(){
    int n;
    cin>>n;
    vector<people> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].age>>p[i].name;
        p[i].num=i;
    }
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<p[i].age<<' '<<p[i].name<<'\n';
}
