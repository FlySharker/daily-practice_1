#include<bits/stdc++.h>
using namespace std;
int main(){
	int w,x,h,q,x1,y1,z1,x2,y2,z2,a[22][22][22]={0},num=0;
	cin>>w>>x>>h>>q;
	while(q){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=1;i<=w;i++){
			for(int j=1;j<=x;j++){
				for(int k=1;k<=h;k++){
					if((i>=x1&&i<=x2)&&(j>=y1&&j<=y2)&&(k>=z1&&k<=z2)&&a[i][j][k]==0) a[i][j][k]=q;
				}
			}
		}
		for(int i=1;i<=w;i++){
			for(int j=1;j<=x;j++){
				for(int k=1;k<=h;k++){
					if(a[i][j][k]==q) num++;
				}
			}
		}
		q--;
	}
	cout<<w*x*h-num;
	return 0;
} 
