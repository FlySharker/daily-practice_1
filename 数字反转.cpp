#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a;
	int x,y,z,p,q;
	cin>>a;
	x=a/100;
	y=int((a/10))%10;
	z=(int(a))%10;
	if(int(a)==a) cout<<100*z+10*y+x;
	else
	{
		p=a*10;
        q=p%10;
		cout<<q+0.1*z+0.01*y+0.001*x;
	}
	return 0;
}
