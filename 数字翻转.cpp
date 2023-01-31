#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int t=0;
    cin>>str;
    if(str[0]=='0'&&str.length()==1){
        cout<<0;
        return 0;
    }
    if(str[0]=='-') cout<<"-";
    for(int i=str.length()-1;i>=0;i--){
        t=0;
        if(str[i]=='0'){
            for(int j=i;j<=str.length()-1;j++){
                if(str[j]=='0') t++;
            }
            if(t==str.length()-i) continue;
        }
        if(str[i]=='-') continue;
        cout<<str[i];
    }
    return 0;
}