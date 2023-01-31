#include<bits/stdc++.h>
using namespace std;
int main(){
	int num=0;
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(str[i]==' ') continue;
		num++;
	}
	cout<<num;
	return 0;
}
