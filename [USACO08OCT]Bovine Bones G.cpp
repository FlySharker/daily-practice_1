#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1,s2,s3,a[16002],max,t;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				a[i+j+k]++;
			}
		}
	}
	max=a[1];
	for(int i=2;i<=s1+s2+s3;i++){
		if(max<a[i]){
			max=a[i];
			t=i;
		}
	}
	cout<<t;
	return 0;
}
