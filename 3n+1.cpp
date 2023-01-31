#include<iostream>
using namespace std;
int main()
{
	int num,i=0,k=1,t;
	while(cin>>num)
	{
		cout<<"Case "<<k++<<": ";
		t=num;
		if(num<=0)
		{
			cout<<num<<", "<<-1<<endl;
		}
		else
		{
			while(i>=0)
			{

				if(num%2==0)
				{
					num/=2;
					i++;
				}
				else
				{
					num=num*3+1;
					i++;
				}
				if(num==1)
				{
					cout<<t<<", "<<i<<endl;
					i=0;
					break;
				}
			}
		}
	}
	return 0;
}
