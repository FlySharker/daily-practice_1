#include<iostream>
using namespace std;
int main()
{
	string x;
	int t=0,k=0,n;
	while(cin>>n){
	getchar();
	for(int i=1;i<=n;i++)
	{
	getline(cin,x);
	cout<<"Case "<<++k<<": ";
	for(int i=0;i<x.length()/2;i++)
	{
		if(x[i]==x[x.length()-i-1])
		{
			t++;
		}
	}
	if(t==x.length()/2)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
	t=0;
}
}
	return 0;
}
