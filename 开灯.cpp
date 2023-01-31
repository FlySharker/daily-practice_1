#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t[5002],light[500005]={0};
	double a[5002];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>t[i];
		for(int j=1;j<=t[i];j++){
			int m=(a[i]*j)/1;
			light[m]++;
		}
	}
	for(int k=1;k<500005;k++){
		if((light[k]%2)!=0) cout<<k;
	}
	return 0;
}
