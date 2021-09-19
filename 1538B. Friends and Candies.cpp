
// Problem: B. Friends and Candies
// Contest: Codeforces - Codeforces Round #725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n], sum=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	if(sum % n!= 0) {
		cout << "-1" << endl;
	}
	
	else{
		ll temp = sum/n, cnt=0;
		for(ll i=0; i<n; i++) {
			if(a[i] > temp) cnt++;
		}
		cout << cnt << endl;
	}
	
	
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
