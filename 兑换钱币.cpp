#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,sum,I=1;
    while (cin>>x)
	{
        sum=0;
        for (int i=0;i<=x/5;i++)
		{
            for (int j=0;j<=(x-i*5)/2;j++)
			{
                sum++;
            }
        }
        cout<<"Case "<<I++<<":"<<x<<","<<sum<<endl;
    }
    return 0;
}
