// Problem: B. Inventory
// Contest: Codeforces - Codeforces Round #315 (Div. 2)
// URL: https://codeforces.com/problemset/problem/569/B
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
	
	ll a[n];
	bool vis[100005] = {};
	vector<ll>v;
	
	for(ll i=0; i<n; i++) {
		ll num;
		cin >> num;
		
		if(vis[num]==false && num<=n){
			a[i] = num;
			vis[num] = true;
		}
		
		else {
			a[i] = -1;
		}
	}
	
	for(ll i=0; i<n; i++){
		if(vis[i+1] == false) v.push_back(i+1);
	}
	
	ll k = 0;
	for(ll i=0; i<n; i++){
		if(a[i] == -1) {
			a[i] = v[k];
			k++;
		}
	}
	
	for(ll i=0; i<n; i++) cout << a[i] << " ";
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
