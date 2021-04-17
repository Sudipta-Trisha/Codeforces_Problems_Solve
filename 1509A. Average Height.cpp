
// Problem: A. Average Height
// Contest: Codeforces - Codeforces Round #715 (Div. 2)
// URL: https://codeforces.com/contest/1509/problem/A
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
	
	ll a[n];
	vector<ll>even,odd;
	
	for(ll i=0; i<n; i++){
		cin >> a[i];
		if(a[i]%2 == 0) even.push_back(a[i]);
		else odd.push_back(a[i]);
	}
	
	for(auto x: odd) cout << x << " ";
	for(auto x: even) cout << x << " ";
	
	cout << endl;
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
