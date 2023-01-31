#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	bool flag;
	cin>>year;
	if((year%400==0)||(year%4==0&&year%100!=0)) flag=1;
	else flag=0;
	cout<<flag;
	return 0;
}
