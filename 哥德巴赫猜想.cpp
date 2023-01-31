#include<iostream>
using namespace std;
int i=0,n,t,r,a,b[20000],o,p,q;
void zhaozhishu()
{
	  for(t=2;t<=n;t++)
	  {	
	    for(r=2;r<t;r++)
	      {
		    if(t%r==0) a++;
	      }
	        if(a==0) 
	      {
	        b[i]=t;
	        i++;
          }
	        if(a!=0) a=0;
      }
}
int main()
{
	cin>>n;
	zhaozhishu();
	for(o=0;o<=n;o++)
	{
		for(p=o;p<=n;p++)
		{
			for(q=i-1;q>=p;q--)
			{
				if(n==b[o]+b[p]+b[q]) 
				{
				cout<<b[o]<<" "<<b[p]<<" "<<b[q];
				return 0; 
			}
			}
		}
	}
	return 0;	
}

