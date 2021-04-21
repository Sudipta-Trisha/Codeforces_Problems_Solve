
// Problem: B. Alyona and Mex
// Contest: Codeforces - Codeforces Round #358 (Div. 2)
// URL: https://codeforces.com/problemset/problem/682/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n];
	for(ll i=0; i<n; i++) cin >> a[i];
	
	sort(a,a+n);
	
	ll cnt = 1;
	for(ll i=0; i<n; i++){
		if(a[i] >= cnt) cnt++;
	}
	
	cout << cnt << endl;
}
