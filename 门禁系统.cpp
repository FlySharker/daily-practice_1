#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,reader[1001],t=0,record[1001];
	while(cin>>n)
	{
	for(int i=1;i<=n;i++)
	{
		cin>>reader[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(reader[i]==reader[j])
			{
				t++;
			}
		}
		record[i]=t;
		t=0;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<record[i]<<" ";
		if(i==n) cout<<endl;
	}
	t=0;
}
	return 0;
}
