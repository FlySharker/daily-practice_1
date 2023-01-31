#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[200][200],b[200][200];
	int i,j;
	int m,n;
	int sum=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
			if(b[i][j]==a[i][j])
			{
				sum++;
			}
		}
	}
	cout<<fixed<<setprecision(2)<<(sum*1.0/(m*n))*100<<endl;
	return 0;
}
