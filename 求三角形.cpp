#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0,m=0;
    cin>>n;
    for(int i=1;i<100;i++){
        if(i<10) cout<<0;
        cout<<i;
        if(i%n==0) cout<<endl;
        if(n==sqrt(i)) break;
    }
    cout<<endl;
    for(int h=n;h>0;h--){
        for(int r=h-1;r>0;r--){
            cout<<"  ";
            t++;
        }
        for(int j=n-t;j>0;j--){
            m++;
            if(m<10) cout<<0;
            cout<<m;
        }
        t=0;
        cout<<endl;
    }
    return 0;
}