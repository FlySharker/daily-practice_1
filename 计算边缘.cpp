#include<iostream>
using namespace std;
int main()
{
	int a[200][200];
	int i,j;
	int m,n;
	int sum=0;
	int x=0,y=0;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	if(m==1)
	{
	    for(j=1;j<=n;j++)
		{
			x+=a[1][j];
		}
		cout<<x;
		return 0;	
	}
	if(n==1)
	{
		for(i=1;i<=m;i++)
		{
			y+=a[i][1];
		}
		cout<<y;
	}
	else 
	{
	for(i=2;i<=m-1;i++)
    {
    	sum+=a[i][1];
    	sum+=a[i][n];
	}
	for(j=2;j<=n-1;j++)
	{
		sum+=a[1][j];
		sum+=a[m][j];
	}
	cout<<sum+a[1][1]+a[1][n]+a[m][1]+a[m][n];
    }
	return 0;
}
