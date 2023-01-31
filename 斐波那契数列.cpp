#include<bits/stdc++.h>
using namespace std;
int main(){
    double a[101]={0};
    int n;
    a[1]=1;
    a[2]=1;
    cin>>n;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<setprecision(2)<<fixed<<a[n];
    return 0;
}