
// Problem: B. Levko and Permutation
// Contest: Codeforces - Codeforces Round #210 (Div. 2)
// URL: https://codeforces.com/problemset/problem/361/B
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
	
	if(n == k) cout << "-1" << endl;
	else {
		cout << n - k << " ";
		for(ll i=1; i<=n; i++){
			if(n - k == i) continue;
			else cout << i << " ";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
