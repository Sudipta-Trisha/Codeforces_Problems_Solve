
// Problem: B. Eugeny and Play List
// Contest: Codeforces - Codeforces Round #182 (Div. 2)
// URL: https://codeforces.com/problemset/problem/302/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	ll song[100007];
	song[0] = 0;
	
	for(ll i=1; i<=n; i++){
		ll c,t;
		cin >> c >> t;
		
		song[i] = song[i-1] + (c*t);
	}
	
	ll j=1;
	for(ll i=1; i<=m; i++){
		ll v;
		cin >> v;
		
		while(song[j] < v) {
			j++;
		}
		
		cout << j << endl;
	}
}
