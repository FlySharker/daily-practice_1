#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=0;
	while(cin>>n)
	{
	cout<<"Case "<<++m<<":"<<endl;
	int num[n][n];
	int k = ceil((double)n/2);	
	for(int j = k;j > 0;j--){
		for(int i = 0;i < n;i++){
			num[j-1][i] = j;
			num[n-j][i] = j;
			num[i][j-1] = j;
			num[i][n-j] = j;	
		}	
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout<<num[i][j];
			if(j < n-1)cout<<" ";
		}
		cout<<endl;
	}
}
	return 0;
}
