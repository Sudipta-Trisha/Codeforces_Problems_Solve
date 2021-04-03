
// Problem: A. Yaroslav and Permutations
// Contest: Codeforces - Codeforces Round #179 (Div. 2)
// URL: https://codeforces.com/problemset/problem/296/A
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
	
	ll a[n],cnt[2000]={0},mx=0;
	set<ll>s;
	
	for(ll i=0; i<n; i++){
		cin >> a[i];
		cnt[a[i]]++;
		mx = max(mx,cnt[a[i]]);
	}
	//cout << mx << endl;
	if(mx <= (n+1)/2) cout << "YES" << endl;
	else cout << "NO" << endl;
}
