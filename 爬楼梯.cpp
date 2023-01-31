#include<iostream>
using namespace std;
int main()
{
	int N,i,a[100001];
	while(cin>>N)
	{
		if(N==1||N==2)
		{
		cout<<1<<endl;
	    }
	    else
	    {
	    	a[1]=1;
	    	a[2]=1;
	    	for(i=3;i<=N+1;i++)
	    	{
	    		a[i]=a[i-1]+a[i-2];
			}
			cout<<a[N+1]<<endl;
		}
	}
	return 0;
}
