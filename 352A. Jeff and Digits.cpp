
// Problem: A. Jeff and Digits
// Contest: Codeforces - Codeforces Round #204 (Div. 2)
// URL: https://codeforces.com/problemset/problem/352/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int five=0, zero =0;
	for(int i=0; i<n; i++){
		int dig;
		cin >> dig;
		
		if(dig == 5) five++;
		else zero++;
	}
	
	if(zero == 0) cout << "-1" << endl;
	else if(five <= 8) cout << "0" << endl;
	else{
		if(five%9!=0) five = five - five%9;
		for(int i=1; i<=five; i++) cout << "5";
		for(int i=1; i<=zero; i++) cout << "0";
		cout << endl;
	}
}