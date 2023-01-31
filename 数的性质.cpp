#include<bits/stdc++.h>
using namespace std;
int oushu(int b)
{
	if(b%2==0) b=1;
	else b=0;
	return b;
}
int daxiao(int c)
{
	if(c>4&&c<=12) c=1;
	else c=0;
	return c;
}
int main()
{
	int a;
	int d,e;
	cin>>a;
    d=oushu(a);
    e=daxiao(a);
    if(d==1&&e==1) cout<<"1 1 0 0";
    else if((d==1&&e==0)||(d==0&&e==1)) cout<<"0 1 1 0";
    else if(d==0&&e==0) cout<<"0 0 0 1";
    return 0;
}
