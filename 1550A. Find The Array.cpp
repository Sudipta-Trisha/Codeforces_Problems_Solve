
// Problem: A. Find The Array
// Contest: Codeforces - Educational Codeforces Round 111 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1550/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll num;
	cin >> num;
	
	ll cnt = 1, max_num = 1;
	
	while(max_num < num){
		cnt++;
		max_num = cnt*cnt;
	}
	
	cout << cnt << endl;
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
