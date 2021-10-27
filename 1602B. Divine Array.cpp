
// Problem: B. Divine Array
// Contest: Codeforces - Codeforces Round #751 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1602/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	vector<ll>v(n);
	
	for(ll i=0; i<n; i++) {
		cin >> v[i];
	}
	
	vector<vector<ll> >ans;
	ans.push_back(v);
	
	for(ll i=0; i<=12; i++) {
		vector<ll>cnt(2002);
		
		for(ll j=0; j<n; j++) {
			cnt[v[j]]++;
		}
		
		for(ll j=0; j<n; j++) {
			v[j] = cnt[v[j]];
		}
		
		ans.push_back(v);
	}
	
	ll q;
	cin >> q;
	
	while(q--) {
		ll x,k;
		cin >> x >> k;
		
		if(k > 12) {
			k = 12;
		}
		cout << ans[k][x-1] << endl;
	}
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
