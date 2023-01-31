#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10][10];
	cin>>n;
	int t=1;
	for(int i=n;i>=1;i--){
		for(int j=n-i+1;j<=i;j++){
			a[n-i+1][j]=t;
			if(t==n*n) break;
			t++;
		}
		for(int k=n-i+2;k<=i;k++){
			a[k][i]=t;
			t++;
		}
		
		for(int p=i-1;p>=n-i+1;p--){
			a[i][p]=t;
			t++;
		}
		
		for(int q=i-1;q>n-i+1;q--){
			a[q][n-i+1]=t;
			t++;
		}
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
