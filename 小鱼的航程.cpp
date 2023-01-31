#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,k=1,l=0;
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        if(x==(7*k-1)||x==7*k){
            if(x==7*k) k++;
            x++;
            continue;
        }
        x++;
        l+=250;
    }
    cout<<l;
    return 0;
}