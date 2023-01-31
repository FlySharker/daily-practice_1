#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,k=1,m,t;
	while(cin>>n)
	{
		m=n;
		cout<<"Case "<<k++<<": "<<n<<", ";
		for(i=0;n>0;i++)
		{
			n/=10;
		}
		t=pow(10,i);
		if((m*m-m)%t==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}

}
  return 0;
}
