
// Problem: A. Computer Game
// Contest: Codeforces - Educational Codeforces Round 115 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1598/A
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
	
	string s1,s2;
	cin >> s1 >> s2;
	
	for(ll i=0; i<n; i++) {
		if(s1[i] == '1' && s2[i] == '1') {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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
