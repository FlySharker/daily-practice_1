#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum1=0,sum2=0,t=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum1+=i;
            t++;
        }
        else sum2+=i;
    }
    cout<<setprecision(1)<<fixed<<(double)sum1/t<<" "<<setprecision(1)<<fixed<<(double)sum2/(n-t);
    return 0;
}