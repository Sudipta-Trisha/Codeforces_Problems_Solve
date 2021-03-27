
// Problem: B. Pashmak and Flowers
// Contest: Codeforces - Codeforces Round #261 (Div. 2)
// URL: https://codeforces.com/problemset/problem/459/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxx = 1e9+10;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n];
	ll cnt1 = 0, cnt2 = 0;
	
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a,a+n);
	ll mn = *min_element(a,a+n);
	ll mx = *max_element(a,a+n);
	cout << mx - mn <<" ";
	
	for(ll i=0; i<n; i++){
		if(a[i] == mn) cnt1++;
		else if(a[i] == mx) cnt2++;
	}
	
	if(mx == mn)
		cout << n*(n-1)/2 << endl;
	else
		cout << cnt1*cnt2 << endl;
}