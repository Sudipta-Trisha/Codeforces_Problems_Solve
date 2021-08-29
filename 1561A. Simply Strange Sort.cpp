
// Problem: A. Simply Strange Sort
// Contest: Codeforces - Codeforces Round #740 (Div. 2, based on VK Cup 2021 - Final (Engine))
// URL: https://codeforces.com/problemset/problem/1561/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_sorted(ll a[], ll n)
{
	ll b[n];
	for(ll i=0; i<n; i++) {
		b[i] = a[i];
	}
	
	sort(b,b+n);
	
	for(ll i=0; i<n; i++) {
		if(b[i] != a[i]) {
			return false;
		}
	}
	return true;
}

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n];
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	
	ll cnt = 0;
	
	while(!is_sorted(a,n)){
		for(ll i=cnt%2; i<=n; i+=2) {
			if(a[i] > a[i+1])
				swap(a[i],a[i+1]);
		}
		cnt++;
	}
	cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
