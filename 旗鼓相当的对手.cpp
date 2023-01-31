#include<bits/stdc++.h>
using namespace std;
struct node{
    int chinese,math,english,sum;
}student[1002];
int main(){
	int n,num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>student[i].chinese>>student[i].math>>student[i].english;
		student[i].sum=student[i].chinese+student[i].math+student[i].english;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(student[i].chinese-student[j].chinese)<=5&&abs(student[i].math-student[j].math)<=5&&abs(student[i].english-student[j].english)<=5&&abs(student[i].sum-student[j].sum)<=10) num++;
		}
	}
	cout<<num;
	return 0;
} 
