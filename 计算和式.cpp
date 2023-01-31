#include<iostream>
using namespace std;
int main()
{
	int a,n,i,s,k=1;
	while(cin>>a>>n)
	{
		int b[n];
		b[0]=a;
		s=a;
		if(n==1)
		{
			cout<<"Case "<<k++<<": "<<b[0]<<" = "<<a<<endl;
		}
		else
		{
		cout<<"Case "<<k++<<": "<<b[0]<<" + ";
		for(i=1;i<n;i++)
		{
			b[i]=b[i-1]*10+b[0];
			cout<<b[i];
			if(i!=n-1) cout<<" + ";
			s+=b[i];
		}
		cout<<" = "<<s<<endl;
	}
	}
	return 0;
}
