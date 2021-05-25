
// Problem: A. Eshag Loves Big Arrays
// Contest: Codeforces - Codeforces Round #722 (Div. 2)
// URL: https://codeforces.com/contest/1529/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n], cnt=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	
	sort(a,a+n);
	
	for(ll i=0; i<n; i++) {
		if(a[i] == a[0]) cnt++;
	}
	
	cout << n - cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	ll test;
	cin >> test;
	
	while(test--) {
	
		solve();
	}
}
