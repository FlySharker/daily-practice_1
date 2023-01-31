#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[3003],sum=0,mi;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		mi+=a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		for(int j=i;j<i+m;j++){
			sum+=a[j];
		}
		mi=min(sum,mi);
		sum=0;
	}
	cout<<mi;
	return 0;
}
