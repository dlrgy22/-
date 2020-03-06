#include<iostream>
using namespace std;
typedef struct people{
    int weight;
    int height;
}People;
int main(){
    int n,i,j,count=1;
    cin>>n;
    People people[n];
    for(i=0;i<n;i++){
        cin>>people[i].weight>>people[i].height;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(people[i].height<people[j].height&&people[i].weight<people[j].weight)
                count++;
        }
        cout<<count<<" ";
        count=1;
    }
}
