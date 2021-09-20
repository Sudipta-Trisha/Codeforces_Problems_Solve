
// Problem: A. Countdown
// Contest: Codeforces - Codeforces Round #743 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1573/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll m;
	cin >> m;
	
	string s;
	cin >> s;
	
	ll sum = 0,non_zero=0;
	for(ll i=0; i<m; i++) {
		if(s[i] != '0') {
			sum += (s[i] - '0');
			non_zero++;
		}
	}
	ll mov = sum;
	if(s[m-1] != '0') {
		mov += (non_zero-1);
		cout << mov << endl;
	}
	else{
		mov += non_zero;
		cout << mov << endl;
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
