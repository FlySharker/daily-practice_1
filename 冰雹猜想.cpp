#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1001],i=1,k;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    a[i]=n;
    while(a[i]!=1){
        if(a[i]%2==0){
            a[i+1]=a[i]/2;
            i++;
            k=i;
        }
        else{
            a[i+1]=a[i]*3+1;
            i++;
            k=i;
        }
    }
    for(int j=k;j>=1;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}