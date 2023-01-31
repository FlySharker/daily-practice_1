#include<iostream>
using namespace std;
int main()
{
	int num,i,j;
	string s1[101][2];
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>s1[i][0];
		cin>>s1[i][1];
	}
	for(i=0;i<num;i++)
	{

			if(s1[i][0]=="Rock"&&s1[i][1]=="Scissors") cout<<"Player1"<<endl;
			if(s1[i][0]=="Rock"&&s1[i][1]=="Paper") cout<<"Player2"<<endl;
			if(s1[i][0]=="Scissors"&&s1[i][1]=="Rock") cout<<"Player2"<<endl;
			if(s1[i][0]=="Scissors"&&s1[i][1]=="Paper") cout<<"Player1"<<endl;
			if(s1[i][0]=="Paper"&&s1[i][1]=="Rock") cout<<"Player1"<<endl;
			if(s1[i][0]=="Paper"&&s1[i][1]=="Scissors") cout<<"Player2"<<endl;
			if(s1[i][0]==s1[i][1]) cout<<"Tie"<<endl;
	}
	return 0;
}   
