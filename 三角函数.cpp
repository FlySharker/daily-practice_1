#include<bits/stdc++.h>
using namespace std;
int zuida()
{
    int a,b,c,m1;
    cin>>a>>b>>c;
    if(a>b) m1=a;
    else m1=b;
    if(m1<c) m1=c;
    return m1;
}
int zuixiao()
{
    int a,b,c,m2;
    if(a<b) m2=a;
    else m2=b;
    if(m2>c) m2=c;
    return m2;
}
int main()
{
    int min,max,t;
    max=zuida();
    min=zuixiao();
    for(int i=min;i>0;i--){
        if(min%i==0&&max%i==0){
            t=i;
            break;
        }
    }
    cout<<(min/t)<<"/"<<(max/t);
    return 0;
}