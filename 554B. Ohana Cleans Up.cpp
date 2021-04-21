
// Problem: B. Ohana Cleans Up
// Contest: Codeforces - Codeforces Round #309 (Div. 2)
// URL: https://codeforces.com/problemset/problem/554/B
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
	
	vector<string>v;
	string s;
	
	for(ll i=0; i<n; i++) {
		cin >> s;
		v.push_back(s);
	}
	
	ll mx = 0, cnt;
	for(ll i=0; i<n; i++){
		s = v[i];
		cnt = 1;
		for(ll j=0; j<n; j++) {
			if(i != j)
				if(s == v[j]) cnt++;
		}
		
		mx = max(cnt,mx);
	}
	cout << mx << endl;
}
