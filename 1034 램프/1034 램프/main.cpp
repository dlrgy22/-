#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
typedef struct count{
    int same=0;
    int lamp=0;
}Count;
using namespace std;
bool compare(Count a,Count b){
    return a.same>b.same;
}
int main(){
    int row,col,count=0,num,result=0;
    cin>>row>>col;
    int lamp[row+1][col+1],i,j,k,lc[row+1];
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            scanf("%1d",&lamp[i][j]);
            if(lamp[i][j]==0)
                count+=1;
        }
        lc[i]=count;
        count=0;
    }
    int visit[row];
    memset(visit,0,sizeof(visit));
    Count c;
    vector<Count> v;
    for(i=1;i<=row;i++){
        if(visit[i]==1)
            continue;
        for(j=i;j<=row;j++){
            int s=0;
            for(k=1;k<=col;k++){
                if(lamp[i][k]!=lamp[j][k]){
                    s=1;
                    break;
                }
            }
            if(s==0){
                count+=1;
                visit[j]=1;
            }
            s=0;
        }
        c.same=count;
        c.lamp=lc[i];
        v.push_back(c);
        count=0;
    }
    sort(v.begin(),v.end(),compare);
    cin>>num;
    for(i=0;i<v.size();i++){
        if(v[i].lamp<=num&&(num-v[i].lamp)%2==0){
            result=v[i].same;
            break;
        }
    }
    cout<<result<<endl;
}
