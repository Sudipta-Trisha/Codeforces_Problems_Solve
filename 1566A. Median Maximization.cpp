
// Problem: A. Median Maximization
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/contest/1566/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n,s;
	cin >> n >> s;
	
	ll temp = n/2 + 1;
	cout << s/temp << endl;
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
