// Problem: B. Big Segment
// Contest: Codeforces - Codeforces Round #149 (Div. 2)
// URL: https://codeforces.com/problemset/problem/242/B
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
	
	vector<pair<ll,ll> >v(n);
	ll mn = INT_MAX, mx = 0;
	for(ll i=0; i<n; i++){
		cin >> v[i].first >> v[i].second;
		
		mn = min(v[i].first,mn);
		mx = max(v[i].second,mx);
	}
	
	for(ll i=0; i<n; i++){
		if(v[i].first == mn && v[i].second == mx){
			cout << i+1 << endl;
			return 0;
		}
	}
	
	cout << "-1" << endl;
}
