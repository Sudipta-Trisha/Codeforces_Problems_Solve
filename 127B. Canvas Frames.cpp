
// Problem: B. Canvas Frames
// Contest: Codeforces - Codeforces Beta Round #93 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/127/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n] , cnt[105] = {0};
	set<ll>s;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		s.insert(a[i]);
	}
	
	ll cont = 0, ans = 0;
	for(auto x: s){
		if(cnt[x] >= 2) {
			cont = cont + floor(cnt[x]/2);
		}
	}
	
	ans = (int)cont/2;
	cout << ans << endl;
}
