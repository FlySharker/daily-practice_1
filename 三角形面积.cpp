#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,p,s;
	cin>>a>>b>>c;
	p=0.5*(a+b+c);
	s=pow(p*(p-a)*(p-b)*(p-c),0.5);
	cout<<setprecision(1)<<fixed<<s;
	return 0;
}
