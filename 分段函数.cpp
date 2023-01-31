#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x;
	double y;
	while(cin>>x)
	{
	if(x>=0&&x<5)
	{
		y=-1*x+2.5;
		cout<<setprecision(3)<<fixed<<y<<endl;
		continue;
	}
	if(x>=5&&x<10)
	{
		y=2-1.5*(x-3)*(x-3);
		cout<<setprecision(3)<<fixed<<y<<endl;
		continue;
	}
	if(x>=10&&x<20)
	{
		y=0.5*x-1.5;
		cout<<setprecision(3)<<fixed<<y<<endl;
		continue;
	}
}
	return 0;
}
