#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,x[30],y[30],o[30],p[30],a[101][101]={0},num=0;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=1;i<=k;i++){
		cin>>o[i]>>p[i];
	}
	for(int i=1;i<=m;i++){
		for(int h=-2;h<3;h++){
			if(a[x[i]+h][y[i]]!=1&&x[i]+h>0&&x[i]+h<n+1) a[x[i]+h][y[i]]=1;
			if(a[x[i]][y[i]+h]!=1&&y[i]+h>0&&y[i]+h<n+1) a[x[i]][y[i]+h]=1;
		}
		if(a[x[i]-1][y[i]-1]!=1&&x[i]-1>0&&x[i]-1<n+1&&y[i]-1>0&&y[i]-1<n+1) a[x[i]-1][y[i]-1]=1;
		if(a[x[i]-1][y[i]+1]!=1&&x[i]-1>0&&x[i]-1<n+1&&y[i]+1>0&&y[i]+1<n+1) a[x[i]-1][y[i]+1]=1;
		if(a[x[i]+1][y[i]-1]!=1&&x[i]+1>0&&x[i]+1<n+1&&y[i]-1>0&&y[i]-1<n+1) a[x[i]+1][y[i]-1]=1;
		if(a[x[i]+1][y[i]+1]!=1&&x[i]+1>0&&x[i]+1<n+1&&y[i]+1>0&&y[i]+1<n+1) a[x[i]+1][y[i]+1]=1;
	}
	for(int i=1;i<=k;i++){
		for(int u=-2;u<3;u++){
			for(int v=-2;v<3;v++){
				if(a[o[i]+u][p[i]+v]!=1&&o[i]+u>0&&o[i]+u<n+1&&p[i]+v>0&&p[i]+v<n+1) a[o[i]+u][p[i]+v]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=1) num++;
		}
	}
	cout<<num;
	return 0;	
}
