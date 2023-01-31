#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N,a,b,c,d,a1,b1,c1,d1;
	cin>>N;
	for(a=2;a<=N;a++)
	{
		for(b=2;b<=N;b++)
		{
			for(c=b;c<=N;c++)
			{
				for(d=c;d<=N;d++)
				{
					a1=a*a*a;
	                b1=b*b*b;
	                c1=c*c*c;
	                d1=d*d*d;
	                if((a1==b1+c1+d1))
	                cout<<"Cube"<<" "<<"="<<" "<<a<<","<<" "<<"Triple"<<" "<<"="<<" "<<"("<<b<<","<<c<<","<<d<<")"<<endl;
				}
			}
		}
	}
	return 0;
 } 
