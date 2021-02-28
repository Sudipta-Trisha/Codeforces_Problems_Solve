
// Problem: A. Berland Poker
// Contest: Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1359/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n,m,k;
		cin >> n >> m >> k;
		
		ll temp = n/k;
		
		ll x = min(m,temp);
		m = m - x;
		ll y = (m+k-2)/(k-1);
		
		cout << x-y << endl;
	}
}