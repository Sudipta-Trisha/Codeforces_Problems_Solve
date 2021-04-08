// Problem: A. Sereja and Bottles
// Contest: Codeforces - Codeforces Round #187 (Div. 2)
// URL: https://codeforces.com/problemset/problem/315/A
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
	ll cnt = 0;
	
	ll a[n],b[n];
	for(ll i=0; i<n; i++){
		cin >> a[i] >> b[i];
	}
	
	bool vis[n+2];
	memset(vis, false, sizeof(vis));
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(i == j) continue;
			if(vis[j] == false){
				if(b[i] == a[j]) vis[j] = true;
			}
		}
	}
	
	for(ll i=0; i<n; i++){
		if(vis[i] == false) cnt++;
	}
	
	cout << cnt << endl;
}
