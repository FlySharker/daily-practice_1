#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if(d-b<0)
	{
		cout<<c-a-1<<" "<<d-b+60;
	}
	else
	{
		cout<<c-a<<" "<<d-b;
	}
	return 0;
}
