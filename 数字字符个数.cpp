#include<iostream>
using namespace std;
int main()
{
	string x;
	int t=0;
	while(getline(cin,x)){
	for(int i=0;i<x.length();i++)
	{
		if(x[i]>='0'&&x[i]<='9')
		{
			t++;
		}
	}
	cout<<t<<endl;
	t=0;
}
	return 0;
}
