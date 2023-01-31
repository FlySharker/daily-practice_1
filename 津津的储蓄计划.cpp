#include<bits/stdc++.h>
using namespace std;
int main(){
    int save=0,a[20],money=0;
    for(int i=1;i<=12;i++){
        cin>>a[i];
    }
    for(int i=1;i<=12;i++){
        money+=300;
        if((money-a[i])<0){
            cout<<"-"<<i;
            return 0;
        }
        save+=(money-a[i])/100;
        money=(money-a[i])%100;    
    }
    money=money+120*save;
    cout<<money;
    return 0;
}