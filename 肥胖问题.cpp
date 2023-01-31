#include<bits/stdc++.h>
using namespace std;
int main()
{
	float m,h;
	cin>>m>>h;
	if(m/(h*h)<18.5) cout<<"Underweight";
	else if((m/(h*h)>=18.5)&&(m/(h*h)<24)) cout<<"Normal";
	else cout<<m/(h*h)<<endl<<"Overweight";
	return 0;
}
