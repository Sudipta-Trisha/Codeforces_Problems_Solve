
// Problem: B. Permutation
// Contest: Codeforces - Codeforces Round #209 (Div. 2)
// URL: https://codeforces.com/problemset/problem/359/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,k;
	cin >> n >> k;
	
	vector<ll>v;
	
	for(ll i=1; i<=2*n; i++) v.push_back(i);
	
	for(ll i=1; i<=k; i++){
		swap(v[2*i-2], v[2*i-1]);
	}
	
	for(auto x: v) cout << x << " ";
	
	return 0;
}
