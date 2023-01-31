#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],t=0;
    for(int i=1;i<=3;i++){
        cin>>a[i];
    }
    for(int i=1;i<=2;i++){
        if(a[i]>a[i+1]){
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
        }
    }
    if(a[1]+a[2]<=a[3]) cout<<"Not triangle";
    else{
        if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3]) cout<<"Right triangle"<<endl;
        if(a[1]*a[1]+a[2]*a[2]>a[3]*a[3]) cout<<"Acute triangle"<<endl;
        if(a[1]*a[1]+a[2]*a[2]<a[3]*a[3]) cout<<"Obtuse triangle"<<endl;
        if(a[1]==a[2]) cout<<"Isosceles triangle"<<endl;
        if(a[1]==a[2]&&a[2]==a[3]) cout<<"Equilateral triangle"<<endl;
    }
    return 0;
}