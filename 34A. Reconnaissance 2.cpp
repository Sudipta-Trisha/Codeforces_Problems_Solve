
// Problem: A. Reconnaissance 2
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n-1; i++){
		b[i] = abs(a[i]-a[i+1]);
	}
	b[n-1] = abs(a[n-1] - a[0]);
	int temp = b[0], index=1;
	
	for(int i=0; i<n; i++){
		if(b[i]<temp){
			temp = b[i];
			index = i+1;
		}
	}
	
	if(index == n){
		cout << "1" << " " << n << endl;
	}
	else{
		cout << index << " " << index+1 << endl;
	}
	
}