#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num[1001],t=0;
	while(cin>>n)
	{
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
           if(abs(num[i]-num[j])==1)
           {
           	t++;
		   }
		}
    }
    cout<<t<<endl;
    t=0;
    }
    return 0;
}
