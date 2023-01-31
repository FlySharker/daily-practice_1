#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t; 
	switch(t)
	{
		case 1:cout<<"I love Luogu!";
		       break;
		case 2:cout<<"6 4";
		       break;
		case 3:cout<<3<<endl;
		       cout<<12<<endl;
		       cout<<2<<endl;
		       break;
		case 4:double p;
		       p=500*1.00000/3;
		       cout<<setprecision(3)<<fixed<<p;
		       break;
		case 5:cout<<15;
		       break;
		case 6:cout<<pow(6*6+9*9,0.5);
		       break;
		case 7:cout<<110<<endl;
		       cout<<90<<endl;
		       cout<<0;
		       break;
		case 8:cout<<2*5*3.141593<<endl;
		       cout<<3.141593*5*5<<endl;
		       cout<<4*3.141593*5*5*5/3<<endl;
		       break;
		case 9:cout<<22;
		       break;
		case 10:cout<<9;
		        break;
		case 11:cout<<100*1.00/3;
		        break;
		case 12:cout<<13<<endl;
		        cout<<"R";
				break;
		case 13:int a;
		        a=pow(4*3.141593*4*4*4*1.00/3+4*3.141593*10*10*10*1.00/3,1.00/3);
				cout<<a;
				break;
		case 14:cout<<50;
		        break;
	}
	return 0;
}
