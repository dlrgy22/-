#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num,i,j,result=0;
    vector<int> lottery,chose;
    srand((unsigned int)time(NULL));
    cout<<"1~45까지 숫자중 6개를 입력하시오"<<endl;
    for(i=0;i<6;i++){
        cin>>num;
        chose.push_back(num);
    }
    while(lottery.size()!=7){
        num=rand()%45+1;
        lottery.push_back(num);
        sort(lottery.begin(),lottery.end());
        lottery.erase(unique(lottery.begin(),lottery.end()),lottery.end());
    }
    for(i=0;i<7;i++){
        cout<<lottery[i]<<' ';
        for(j=0;j<6;j++){
            if(chose[j]==lottery[i])
                result+=1;
        }
    }
    if(result==6)
        cout<<"1등입니다!!"<<endl;
    else if(result==5)
        cout<<"2등입니다!!"<<endl;
    else if(result==4)
        cout<<"3등입니다!!"<<endl;
    else if(result==3)
        cout<<"4등입니다!!"<<endl;
    else
        cout<<"꽝입니다!!"<<endl;
    cout<<result<<"개 맞췄습니다!";
}
