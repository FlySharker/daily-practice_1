#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    char A,B,C;
    cin>>a[0]>>a[1]>>a[2];
    cin>>A>>B>>C;
    sort(a,a+3);
    cout<<a[A-'A']<<" "<<a[B-'A']<<" "<<a[C-'A'];
    return 0;
}