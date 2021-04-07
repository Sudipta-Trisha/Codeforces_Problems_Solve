// Problem: B. Sereja and Suffixes
// Contest: Codeforces - Codeforces Round #215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/368/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	ll a[n],suff[n+3];
	set<ll>s;
	for(ll i=0; i<n; i++) cin >> a[i];
	
	for(ll i=n-1; i>=0; i--){
		s.insert(a[i]);
		suff[i] = s.size();
	}
	
	while(m--){
		ll num;
		cin >> num;
		cout << suff[num-1] << endl;
	}
}

