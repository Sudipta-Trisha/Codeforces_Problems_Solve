
// Problem: A. 2048 Game
// Contest: Codeforces - Educational Codeforces Round 73 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1221/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll test;
	cin >> test;
	map<ll,int>mp;
	while(test--){
		mp.clear();
		ll n;
		cin >> n;
		
		for(ll i=0; i<n; i++){
			ll a;
			cin >> a;
			mp[a]++;
		}
		
		for(ll i=1; i<2048; i=i*2){
			mp[i*2] = mp[i*2] + mp[i]/2;
		}
		
		if(mp[2048] > 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}