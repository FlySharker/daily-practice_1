#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d=-1,e;//����ȫ����;
string qwq,c1,b1;
int main()
{
	cin>>n;
	cin>>qwq;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)//����1
		{
			cin>>b1;
			qwq+=b1;
			cout<<qwq<<endl;
		}
		else if(a==2)//����2
		{
			cin>>b>>c;
			c1=qwq.substr(b,c);
			qwq=c1;
			cout<<qwq<<endl;
		}
		else if(a==3)//����3
		{
			cin>>b>>b1;
			qwq.insert(b,b1);
			cout<<qwq<<endl;
		}
		else if(a==4)//����4
		{
			cin>>b1;
			if(qwq.find(b1)<qwq.size())//�Ҳ����᷵��һ����������֣��������ַ�������
			cout<<qwq.find(b1)<<endl;
			else
			cout<<-1<<endl;
		}
	}
    return 0;
}
