#include "iostream"
#include "vector"
using namespace std;
int main (){
    int num,black,i,a,sum,result=0;
    vector<int> card;
    cin>>num;
    cin>>black;
    for(i=0;i<num;i++){
        cin>>a;
        card.push_back(a);
    }
    for(vector<int>::size_type i=0;i!=card.size();i++){
        for(vector<int>::size_type j=i+1;j!=card.size();j++){
            for(vector<int>::size_type k=j+1;k!=card.size();k++){
                sum=card[i]+card[j]+card[k];
                if(sum>result&&sum<=black){
                    result=sum;
                }
                if(result==black)
                    break;
            }
            if(result==black)
                break;
        }
        if(result==black)
            break;
    }
    cout<<result<<'\n';
}
