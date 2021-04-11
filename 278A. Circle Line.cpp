
// Problem: A. Circle Line
// Contest: Codeforces - Codeforces Round #170 (Div. 2)
// URL: https://codeforces.com/problemset/problem/278/A
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
	
	ll a[n+3];
	for(ll i=1; i<=n; i++) cin >> a[i];
	
	ll dis1 = 0, dis2 = 0;
	ll s,t;
	cin >> s >> t;
	
	if(s > t) swap(s,t);
	if(s == t){
		cout << 0 << endl;
		return 0;
	}
	
	for(ll i=s; i<t; i++){
		dis1 += a[i];
	}
	
	for(ll i=t; i<=n; i++) dis2 += a[i];
	for(ll i=1; i<s; i++) dis2 += a[i];
	
	cout << min(dis1, dis2) << endl;
}
