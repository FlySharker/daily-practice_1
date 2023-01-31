#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0,t,m;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        t=i;
        while(t!=0){
            m=t%10;
            t/=10;
            if(m==x) ans++;
        }
    }
    cout<<ans;
    return 0;
}