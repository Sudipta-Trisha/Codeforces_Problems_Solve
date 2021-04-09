
// Problem: A. GukiZ and Contest
// Contest: Codeforces - Codeforces Round #307 (Div. 2)
// URL: https://codeforces.com/problemset/problem/551/A
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
	ll a[n];
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	
	for(ll i=0; i<n; i++){
		ll cnt=1;
		for(ll j=0; j<n; j++){
			if(a[i] < a[j]) cnt++;
		}
		cout << cnt << " ";
	}
	cout << endl;

}
