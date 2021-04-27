
// Problem: B. Wilbur and Array
// Contest: Codeforces - Codeforces Round #331 (Div. 2)
// URL: https://codeforces.com/problemset/problem/596/B
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
	
	ll b[n];
	for(ll i=0; i<n; i++) cin >> b[i];
	
	ll step_cnt = 0;
	for(ll i=1; i<n; i++){
		ll temp = abs(b[i] - b[i-1]);
		step_cnt += temp;
	}
	
	cout << step_cnt + abs(b[0]) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
