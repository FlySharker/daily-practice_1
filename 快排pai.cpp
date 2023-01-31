#include<bits/stdc++.h>
using namespace std;
int a[100001],n;
void sorti(int l,int r){
	int tmp=a[(l+r)/2];
	int i=l,j=r;
	do{
		while(a[i]<tmp) i++;
		while(tmp<a[j]) j--;
		if(i<=j) {
			swap(a[i],a[j]);
			i++;j--;
		}
	}while(i<=j);
	if(l<j) sorti(l,j);
	if(i<r) sorti(i,r);
}
int main()
{
	int i=1,n=1,k=1;
    string str;
    while(getline(cin,str))
    {
    	cout<<"Case "<<k++<<": "; 
    	istringstream istr(str);
    	while(istr>>a[i])
		{
    	i++;
    	n++;
        }
        n=n-1;
    	sorti(1,n);
	    for(int t=1;t<=n;t++)
		{
	    cout<<a[t]<<" ";
	    }
	cout<<endl;
	n=1;
	i=1;
	}
	return 0;
}
