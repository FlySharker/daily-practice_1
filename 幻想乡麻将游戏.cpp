#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,flag=0,a[6]={0},b[100005]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<4;j++){
			cin>>a[j];
		}
		sort(a,a+4);
		if(a[0]+1==a[1]&&a[0]+2==a[2]) flag=1;
		else if(a[1]+1==a[2]&&a[1]+2==a[3]) flag=1;
		else if(a[0]==a[1]&&(a[2]+1==a[3]||a[2]+2==a[3])) flag=1;
		else if(a[2]==a[3]&&(a[0]+1==a[1]||a[0]+2==a[1])) flag=1;
		else if(a[1]==a[2]&&a[0]+2==a[3]) flag=1;
		b[i]=flag;
		flag=0;
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
