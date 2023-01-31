#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20],h,n=0;
    for(int i=1;i<=10;i++){
        cin>>a[i];
    }
    cin>>h;
    for(int i=1;i<=10;i++){
        if(h+30>=a[i]) n++;
    }
    cout<<n;
    return 0;
}