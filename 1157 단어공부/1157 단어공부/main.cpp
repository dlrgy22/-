#include <iostream>
#include <string.h>
using namespace std;
int main (){
    char word[1000000];
    memset(word,0,sizeof(word));
    cin>>word;
    int arr[27],i,j,large=26,same=0;
    memset(arr,0,sizeof(arr));
    for(i=0;i<sizeof(word);i++){
        if(word[i]>='a')
            j=word[i]-'a';
        else
            j=word[i]-'A';
        arr[j]++;
    }
    for(i=0;i<26;i++){
        if(arr[i]>arr[large]){
            large=i;
            same=0;
        }
        else if(arr[i]==arr[large])
            same=1;
    }
    if(same==1)
        cout<<'?'<<'\n';
    else
        printf("%c\n",'A'+large);
}

