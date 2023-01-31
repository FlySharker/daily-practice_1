#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,s1,s2,s3;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s1>>s2>>s3;
		cout<<(int)(s1*0.45+s2*0.45+s3*0.1)<<endl;
	}
	return 0;
}
