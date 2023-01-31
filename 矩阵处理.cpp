#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int m=0,n=0;
	while(1){
	while(getline(cin,str))
	{
		if(str.length()==0) break;
		if(m==0) m=str.length()-(str.length()/2); 
		n++;
	}
    cout<<m<<" "<<n<<endl;
    m=0;
    n=0;
}
	return 0;
}
