#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100001]={0},day,t=1,k;
    cin>>day;
    for(int i=1;i<=201;i++){
        while(a[t]!=0){
            t++;
        }
        k=i;
        for(int j=t;k>0;j++){
            a[j]=i;
            k--;
        }
        t=1;
    }
    for(int i=1;i<=day;i++){
        a[0]+=a[i];
    }
    cout<<a[0];
    return 0;
}