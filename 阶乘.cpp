#include<iostream>
using namespace std;
int main()
{
	int n,t=0,k=1,i,m;
	while(cin>>n)
	{
		cout<<"Case "<<k++<<": "; 
		for(i=1;i<=n;i++ )
		{
			if(i%5==0)
			{
				m=i;
				while(m!=0&&m%5==0)
				{
					t++;
					m/=5;
				}
			}
		}
		    cout<<n<<", "<<t<<endl;
		    t=0;
    }

	return 0;
}

