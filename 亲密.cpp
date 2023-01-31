#include<iostream>
using namespace std;
int main()
{
	int a,b,i,k=1,s1=1,s2=1,t;
	while(cin>>a>>b)
	{
		cout<<"Case "<<k++<<": "<<a<<", "<<b<<", ";
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				s1+=i;
			}
		}
		for(t=2;t<b;t++)
		{
			if(b%t==0)
			{
				s2+=t;
			}
		}
		if(s1==b&&s2==a)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		s1=1;
		s2=1;
}
return 0;
}
		
