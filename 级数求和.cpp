#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    double sum=0;
    cin>>k;
    for(int i=1;i<=1000000000;i++){
        sum+=(double)1/i;
        if(sum>k){
            n=i;
            break;    
        }
    }
    cout<<n;
    return 0;
}