#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num1=0,num2=0,num3=0,num4=0,num5=0,t=0;
	cin>>n;
	char a[13][13],b[13][13],c[13][13];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=n;i++){//90
		for(int j=1;j<=n;j++){
			if(a[i][j]==b[j][n-i+1]){
				num1++;
				if(num1==n*n){
					t++;
					cout<<1;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//180
		for(int j=1;j<=n;j++){
			if(a[i][j]==b[n-i+1][n-j+1]){
				num2++;
				if(num2==n*n){
					t++;
					cout<<2;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//-90
		for(int j=1;j<=n;j++){
			if(a[i][j]==b[n-j+1][i]){
				num3++;
				if(num3==n*n){
					t++;
					cout<<3;
					return 0;
				}
			}
		}
	}
	num1=0;
	num2=0;
	num3=0;
	for(int i=1;i<=n;i++){//翻转 
		for(int j=1;j<=n;j++){
			if(a[i][j]==b[i][n-j+1]){
				num4++;
				if(num4==n*n){
					t++;
					cout<<4;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//组合 
		for(int j=1;j<=n;j++){
			c[i][n-j+1]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){//++90
		for(int j=1;j<=n;j++){
			if(c[i][j]==b[j][n-i+1]){
				num1++;
				if(num1==n*n){
					t++;
					cout<<5;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//++180
		for(int j=1;j<=n;j++){
			if(c[i][j]==b[n-i+1][n-j+1]){
				num2++;
				if(num2==n*n){
					t++;
					cout<<5;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//++-90
		for(int j=1;j<=n;j++){
			if(c[i][j]==b[n-j+1][i]){
				num3++;
				if(num3==n*n){
					t++;
					cout<<5;
					return 0;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){//原 
		for(int j=1;j<=n;j++){
			if(a[i][j]==b[i][j]){
				num5++;
				if(num5==n*n){
					t++;
					cout<<6;
					return 0;
				}
			}
		}
	}
	if(t==0) cout<<7;
	return 0; 
}
