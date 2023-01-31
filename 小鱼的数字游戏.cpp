#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1001],k,j=1;
    while(cin>>k){
        a[j]=k;
        j++;
        if(k==0) break;
    }
    for(int i=j-2;i>=1;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}