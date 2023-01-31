#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,t,s,a;
	cin>>m>>t>>s;
if(t!=0)
{
	if(s/t<=m){
       if(s%t==0)
       {
    	   a=m-s/t;
	   }
	   else
	   {
		   a=m-s/t-1;
	   }
	   cout<<a;
    }
	else
	{
		cout<<0; 
	}
}
else
{
	cout<<0;
}
return 0;
}
