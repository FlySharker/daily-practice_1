#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[102],t=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[j]<a[i]) t++;
        }
        cout<<t<<" ";
        t=0;
    }
    return 0;
}