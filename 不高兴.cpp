#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],k=0,s=0;
    for(int i=1;i<=7;i++){
        cin>>a[i]>>b[i];
        if((a[i]<0||a[i]>=10)||(b[i]<0||b[i]>=10)) return 0;
    }
    for(int i=1;i<=7;i++){
        if(a[i]+b[i]>8){
            if(s<(a[i]+b[i])){
                s=a[i]+b[i];
                k=i;
            }
          }
    }
    if(k==0) cout<<0;
    else cout<<k;
    return 0;
}