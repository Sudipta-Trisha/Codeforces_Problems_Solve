
// Problem: B. Effective Approach
// Contest: Codeforces - Codeforces Round #140 (Div. 2)
// URL: https://codeforces.com/problemset/problem/227/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll index[n+2];
	for(ll i=0; i<n; i++){
		ll x;
		cin >> x;
		index[x] = i+1;
	}
	
	ll cnt1=0, cnt2=0;
	
	ll m;
	cin >> m;
	for(ll i=0; i<m; i++){
		ll q;
		cin >> q;
		cnt1 = cnt1 + index[q];
		cnt2 = cnt2 + (n-index[q])+1;
	}
	
	cout << cnt1 << " " << cnt2 << endl;
}