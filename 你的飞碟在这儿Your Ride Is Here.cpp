#include<bits/stdc++.h>//c++����ͷ�ļ� 
using namespace std;//�����ռ�~ 
int main(){
	const int m=47;
	int sum1=1,sum2=1;
	string star,group;
	getline(cin,star);
	getline(cin,group);
	for(int i=0;i<star.size();i++){
		sum1*=((star[i]-'@')%m);
	}
	sum1%=m;
	for(int i=0;i<group.size();i++){
		sum2*=((group[i]-'@')%m);
	}
	sum2%=m;
	if(sum1==sum2) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
