#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n, arr[105][105], x[105], y[105], sum1 = 0, sum2 = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> arr[i][j];
		}
	}
	int k = 0; 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			sum1 += arr[i][j];
		}
		if(sum1 % 2 != 0){
			x[k] = i;
			k++;
		}
		sum1 = 0;
	}
	int l = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			sum2 += arr[j][i];
		}
		if(sum2 % 2 != 0){
			y[l] = i;
			l++;
		}
		sum2 = 0;
	}
	if(l == 1 && k == 1){
		cout << x[0] << " " << y[0];
	}else if(l == 0 && k == 0){
		cout << "OK";
	}else{
		cout << "Corrupt";
	}
	
	return 0; 
} 

