
// Problem: A. Linear Keyboard
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/contest/1607/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string s1,s2;
	cin >> s1 >> s2;
	
	vector<ll>v;
	for(ll j=0; j<s2.length(); j++)
	{	
		for(ll i=0; i<s1.length(); i++) {
			if(s1[i] == s2[j]) v.push_back(i+1);
		}
	}
	ll cnt = 0;
	for(ll i=0; i<v.size()-1; i++) {
		cnt += abs(v[i+1]-v[i]);
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
