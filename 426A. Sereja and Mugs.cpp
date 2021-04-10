
// Problem: A. Sereja and Mugs
// Contest: Codeforces - Codeforces Round #243 (Div. 2)
// URL: https://codeforces.com/problemset/problem/426/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >>m;
	ll a[n];
	ll sum = 0;
	for(ll i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	ll mx = *max_element(a,a+n);
	if(sum-mx <= m) cout << "YES" << endl;
	else cout << "NO" << endl;
	
}
