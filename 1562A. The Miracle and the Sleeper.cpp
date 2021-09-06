
// Problem: A. The Miracle and the Sleeper
// Contest: Codeforces - Codeforces Round #741 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1562/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll l,r;
	cin >> l >> r;
	
	if((l*2) > r) {
		cout << r-l << endl;
		return ;
	}
	
	ll ans = (r-1)/2;
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
