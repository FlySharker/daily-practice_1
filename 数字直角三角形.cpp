#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100],m,n,t=1;
    cin>>n;
    for(int i=1;i<=100;i++){
        a[i]=i;
    }
    m=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[t]<10) cout<<0;
            cout<<a[t];
            t++;
        }
        cout<<endl;
        m--;
    } 
    return 0;
}