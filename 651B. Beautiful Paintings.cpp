
// Problem: B. Beautiful Paintings
// Contest: Codeforces - Codeforces Round #345 (Div. 2)
// URL: https://codeforces.com/problemset/problem/651/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n], cnt = 0;
	bool vis[10005] = {};
	
	for(ll i=0; i<n; i++){
		cin >> a[i];
		vis[i] = 0;
	} 
	
	sort(a,a+n);
	for(ll i=0; i<n; i++){
		for(ll j=i+1; j<n; j++){
			if(vis[j] == false && a[i] < a[j]) {
				cnt++;
				vis[j] = true;
				break;
			}
		}
	}
	
	cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
