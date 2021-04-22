
// Problem: A. Tit for Tat
// Contest: Codeforces - Codeforces Round #717 (Div. 2)
// URL: https://codeforces.com/contest/1516/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n,k;
	cin >> n >> k;
	
	ll a[n],mx=0,index;
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(ll i=0; i<n-1 && k>0; i++){
		ll mn = min(a[i],k);
		a[i] = a[i] - mn;
		a[n-1] = a[n-1] + mn;
		k = k - mn;
	}
	
	for(ll i=0; i<n; i++) cout << a[i] << " ";
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
