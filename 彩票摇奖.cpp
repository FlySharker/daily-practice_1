#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p[10],a[10],special=0,first=0,second=0,third=0,fourth=0,fifth=0,sixth=0,num=0;
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>p[i];
	}
	for(int k=n;k>0;k--){
		for(int i=0;i<7;i++){
			cin>>a[i];
		}
		for(int i=0;i<7;i++){
			for(int j=0;j<7;j++){
				if(a[i]==p[j]) num++;
			}
		}
		if(num==7) special++;
		if(num==6) first++;
		if(num==5) second++;
		if(num==4) third++;
		if(num==3) fourth++;
		if(num==2) fifth++;
		if(num==1) sixth++;
		num=0;
	}
	cout<<special<<" "<<first<<" "<<second<<" "<<third<<" "<<fourth<<" "<<fifth<<" "<<sixth;
	return 0;
}
