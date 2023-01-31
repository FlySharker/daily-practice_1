#include<bits/stdc++.h>
using namespace std;
bool rule1(int b[][45],int k,int num){
	for(int j=1;j<num;j++){
		if(k-1==b[1][j]) return true;
	}
	return false;
}
bool rule2(int b[][45],int k,int num){
	for(int j=2;j<=num;j++){
		if(k-1==b[j][num]) return true;
	}
	return false;
}
bool rule3(int b[][45],int k,int num){
	if(k-1==b[1][num]) return true;
	else return false;
}
int main(){
	int n,a[45][45]={0};
	cin>>n;
	a[1][(n/2)+1]=1;
	int row=1,column=n/2+1;
	for(int i=2;i<=n*n;i++){
		if(rule1(a,i,n)){
			row=n;
			column+=1;
			a[row][column]=i;
			continue;
		}
		else if(rule2(a,i,n)){
			row-=1;
			column=1;
			a[row][column]=i;
			continue;
		} 
		else if(rule3(a,i,n)){
			row+=1;
			a[row][column]=i;
			continue;
		}
		else{
			if(a[row-1][column+1]==0){
				row-=1;
				column+=1;
				a[row][column]=i;
			}
			else{
				row+=1;
			    a[row][column]=i;
			}
			continue; 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
