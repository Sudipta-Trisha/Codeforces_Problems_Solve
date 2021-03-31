
// Problem: A. Shooshuns and Sequence
// Contest: Codeforces - Codeforces Round #137 (Div. 2)
// URL: https://codeforces.com/problemset/problem/222/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,k;
	cin >> n >> k;
	
	ll temp = 0, cnt=1;
	for(ll i=0; i<n; i++){
		ll x;
		cin >> x;
		
		if(x == temp) cnt +=1;
		else cnt=1;
		
		temp = x;
	}
	if(cnt + k > n) cout << n-cnt << endl;
	else cout << "-1" << endl;
}