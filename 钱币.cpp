#include<iostream>
using namespace std;
int main()
{
	int n,k=1,sum,x,y,z;
	while(cin>>n)
	{
		cout<<"Case "<<k++<<": "<<n<<", ";
		sum=0;
		for(x=0;x<=n;x++)
		{
			for(y=0;y<=n/2;y++)
			{
				for(z=0;z<=n/5;z++)
				{
					if(x+2*y+5*z==n)
					{
						sum+=1;
					}
				}
			}
		}
        cout<<sum<<endl;
	}
	return 0;
}
