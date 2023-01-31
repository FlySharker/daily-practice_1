#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,k,n;
    cin>>n;
    for(x=100;x>0;x--){
        for(k=1;k<1000;k++){
            if(n==52*(7*x+21*k)){
                cout<<x<<endl<<k;
                return 0;
            }
        }
    }
    return 0;
}