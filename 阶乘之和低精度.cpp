#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=1,sum=0,m;
    cin>>n;
    m=n;
    for(int i=1;i<=m;i++){
        for(int j=n;j>=1;j--){
            p*=j;
        }
        sum+=p;
        n--;
        p=1;
    }
    cout<<sum;
    return 0;
}