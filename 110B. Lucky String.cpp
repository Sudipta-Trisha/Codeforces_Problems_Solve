
// Problem: B. Lucky String
// Contest: Codeforces - Codeforces Beta Round #84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

char a[100005];

void temp(){
	for(ll i=0; i<100005; i+=4){
		a[i] = 'a';
		a[i+1] = 'b';
		a[i+2] = 'c';
		a[i+3] = 'd';
	}
}

int main()
{
	temp();
	ll n;
	cin >> n;
	
	for(ll i=0; i<n; i++){
		cout << a[i];
	}
	
	cout << endl;
}
