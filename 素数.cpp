#include<iostream>
using namespace std;
int main()
{
	int n,i,k=1;
	while(cin>>n)
	{
		cout<<"Case "<<k++<<": "<<"Number "<<n<<" is ";
		if(n==2)
		{
			cout<<"prime."<<endl;
		}
		else
		{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
              cout<<"not "<<"prime."<<endl;
              break;
			}
	    }
		if(i==n) cout<<"prime."<<endl;
	}
	}
	return 0;
}
