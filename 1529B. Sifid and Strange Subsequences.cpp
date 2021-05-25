
// Problem: B. Sifid and Strange Subsequences
// Contest: Codeforces - Codeforces Round #722 (Div. 2)
// URL: https://codeforces.com/contest/1529/problem/B
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
	
	ll a[n],mini = INT_MAX, total=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		
		if(a[i] > 0) 
			mini = min(mini,a[i]);
		else total++;
	}
	
	sort(a,a+n);
	
	ll min_diff = INT_MAX-1;
	for(ll i=1; i<n; i++) {
		if(a[i] <= 0) {
			ll temp = a[i] - a[i-1];
			min_diff = min(min_diff , temp);
		}
	}
	
	ll ans = (min_diff >= mini) ? total+1 : total;
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	ll test;
	cin >> test;
	
	while(test--) {
		solve();
	}
}
