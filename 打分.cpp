#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1002];
    float score;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n-1;i++){
        score+=a[i];
    }
    score/=(n-2);
    cout<<setprecision(2)<<fixed<<score;
    return 0;
}