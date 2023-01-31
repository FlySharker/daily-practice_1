#include<bits/stdc++.h>
using namespace std;
int seperate(int number,int *b){
	while(number){
		int t=number%10;
		if(t==0) b[0]++;
		if(t==1) b[1]++;
		if(t==2) b[2]++;
		if(t==3) b[3]++;
		if(t==4) b[4]++;
		if(t==5) b[5]++;
		if(t==6) b[6]++;
		if(t==7) b[7]++;
		if(t==8) b[8]++;
		if(t==9) b[9]++;
		number/=10;
	}
	return *b; 
}
int main(){
	int m,n,a[10]={0};
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		*a=seperate(i,a);
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
