#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int n,flag=0,a[10005]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>str;
		for(int j=0;j<str.size()-3;j++){
			if((str[j]==str[j+1]&&str[j]==str[j+2]&&str[j]==str[j+3])||(str[0]=='D'&&str[1]=='X')){
				flag=1;
				a[i]=flag;
			}
		}
		a[i]=flag;
		flag=0;
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
