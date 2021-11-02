
// Problem: C. Minimum Extraction
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/contest/1607/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n];
	for(ll i=0; i<n; i++) cin >> a[i];
	
	sort(a,a+n);
	
	ll sum = 0,ans = a[0];
	
	for(ll i=0; i<n; i++) {
		a[i] = a[i] - sum;
		ans = max(ans, a[i]);
		sum += a[i];
	}
	cout << ans << endl;
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
