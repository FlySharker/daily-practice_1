#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t=1;
	string str;
	cin>>n;
	cin>>str;
	for(int i=0;i<str.size();i++){
		for(int j=1;j<=n;j++){
			if(str[i]=='z') str[i]-=26;
			str[i]+=t;
			
		}
	}
	for(int i=0;i<str.size();i++){
		cout<<str[i];
	}
	return 0;
} 
