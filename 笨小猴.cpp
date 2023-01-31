#include<bits/stdc++.h>
using namespace std;
bool prime(int num){
	if(num==0||num==1) return 0;
	for(int j=2;j<=sqrt(num);j++){
		if(num%j==0) return 0; 
	}
	return 1;
}
int main(){
	string str;
	int a[30]={0},m;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='a') a[1]++;
		else if(str[i]=='b') a[2]++;
		else if(str[i]=='c') a[3]++;
		else if(str[i]=='d') a[4]++;
		else if(str[i]=='e') a[5]++;
		else if(str[i]=='f') a[6]++;
		else if(str[i]=='g') a[7]++;
		else if(str[i]=='h') a[8]++;
		else if(str[i]=='i') a[9]++;
		else if(str[i]=='j') a[10]++;
		else if(str[i]=='k') a[11]++;
		else if(str[i]=='l') a[12]++;
		else if(str[i]=='m') a[13]++;
		else if(str[i]=='n') a[14]++;
		else if(str[i]=='o') a[15]++;
		else if(str[i]=='p') a[16]++;
		else if(str[i]=='q') a[17]++;
		else if(str[i]=='r') a[18]++;
		else if(str[i]=='s') a[19]++;
		else if(str[i]=='t') a[20]++;
		else if(str[i]=='u') a[21]++;
		else if(str[i]=='v') a[22]++;
		else if(str[i]=='w') a[23]++;
		else if(str[i]=='x') a[24]++;
		else if(str[i]=='y') a[25]++;
		else if(str[i]=='z') a[26]++;
	}
	sort(a+1,a+27);
	for(int k=1;k<=26;k++){
		if(a[k]==0) continue;
		else{
			m=a[k];
			break;
		}
	}
	if(prime(a[26]-m)==1) cout<<"Lucky Word"<<endl<<a[26]-m;
	else cout<<"No Answer"<<endl<<0;
	return 0;
}
