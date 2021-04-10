
// Problem: A. Line to Cashier
// Contest: Codeforces - Codeforces Round #239 (Div. 2)
// URL: https://codeforces.com/problemset/problem/408/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n], sum[n], cnt = 0;
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<a[i]; j++){
			ll num;
			cin >> num;
			
			cnt += num;
		}
		
		sum[i] = cnt;
		cnt = 0;
	}
	ll time[n];
	for(ll i=0; i<n; i++) {
		ll ans = sum[i]*5 + a[i]*15;
		time[i] = ans;
	}
	
	
	ll res = *min_element(time,time+n);
	cout << res << endl;
}
