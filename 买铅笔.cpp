#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,m1,n2,m2,n3,m3,s1,s2,s3,s=0;
    cin>>n>>n1>>m1>>n2>>m2>>n3>>m3;
    for(int i=1;i<=n;i++){
        if(n1*i>n){
            s1=m1*i;
            break;
        } 
    }
    for(int i=1;i<=n;i++){
        if(n2*i>n){
            s2=m2*i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(n3*i>n){
            s3=m3*i;
            break;
        }
    }
    if(s1<s2){
        s=s1;
    }
    else s=s2;
    if(s>s3) s=s3;
    cout<<s;
    return 0;
}