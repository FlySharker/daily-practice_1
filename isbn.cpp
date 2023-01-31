#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	while(getline(cin,x)){
		int sum=0,k=0;
		for(int i=0;i<=11;i++)
			if(x[i]>='0'&&x[i]<='9') sum+=(x[i]-48)*(++k);
		sum%=11;
		char y;
		if(sum==10) y='X';
		else y=sum+48; 
		if(x[12]==y) cout<<"Right";
		else{
			for(int i=0;i<=11;i++) cout<<x[i];
			cout<<y;
		}
		cout<<endl;
	}
	return 0;
}
