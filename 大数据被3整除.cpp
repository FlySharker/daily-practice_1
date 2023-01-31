#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a;
	int z=0;
	while(cin.get(a))
	{
		if(a!='\n')
		{
		z=a-'0';
	    }
		else
		{
			if(z%3==0)
			cout<<"Y\n";
			else
			cout<<"N\n";
			z=0;
		 } 
	}
	return 0;
 } 
