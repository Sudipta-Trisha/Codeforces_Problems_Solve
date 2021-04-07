
// Problem: A. Free Cash
// Contest: Codeforces - Codeforces Round #147 (Div. 2)
// URL: https://codeforces.com/problemset/problem/237/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll cnt=1, mx_cash=1, h1,m1;
	cin >> h1 >> m1;
	for(ll i=2; i<=n; i++){
		ll h,m;
		cin >> h >> m;
		
		if(h1 == h && m1 == m){
			cnt++;
			mx_cash = max(mx_cash,cnt);
		}
		
		else cnt = 1;
		
		h1 = h;
		m1 = m;
	}

	cout << mx_cash << endl;
}
