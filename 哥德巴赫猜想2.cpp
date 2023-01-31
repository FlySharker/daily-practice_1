#include<bits/stdc++.h>
using namespace std;
bool prime(int m){
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,a[10010]={0},t=1;
	cin>>n;
	for(int i=2;i<=10000;i++){
		if(prime(i)==1){
			a[t]=i;
			t++;
		} 
	}
	for(int i=4;i<=n;i+=2){
		for(int j=1;j<=t&&a[j]<i;j++){
			int *p=find(a+1,a+t+2,i-a[j]);
			if(p!=a+t+2){
				cout<<i<<"="<<a[j]<<"+"<<i-a[j]<<endl;
				break;
			}
		}
	}
	return 0;
}
