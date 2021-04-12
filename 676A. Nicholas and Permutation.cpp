// Problem: A. Nicholas and Permutation
// Contest: Codeforces - Codeforces Round #354 (Div. 2)
// URL: https://codeforces.com/problemset/problem/676/A
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
	
	ll a[n+20];
	for(ll i=1; i<=n; i++){
		cin >> a[i];
	}
	
	ll mx = n, mn = 1;
	
	ll max_pos=0, min_pos=0;
	
	for(ll i=1; i<=n; i++){
		if(a[i] == mx) max_pos = i;
		if(a[i] == mn) min_pos = i;
	}
	
	ll pos_diff_mx = 0, pos_diff_mx2 = 0, index1, index2;
	for(ll i=1; i<=n; i++){
		ll temp = abs(i-max_pos);
		if(pos_diff_mx < temp) {
			index1 = i;
			pos_diff_mx = temp;
		}
	}
	
	for(ll i=1; i<=n; i++){
		ll temp = abs(i-min_pos);
		if(pos_diff_mx2 < temp) {
			index2 = i;
			pos_diff_mx2 = temp;
		}
	}
	
	if((a[1]==n && a[n]==1) || a[1]==1 && a[n]==n){
		ll ans = abs(max_pos - min_pos);
		cout << ans << endl;
	}
	
	else if(pos_diff_mx > pos_diff_mx2){
		ll ans = abs(max_pos - index1);
		cout << ans << endl;
	}
	
	else if(pos_diff_mx < pos_diff_mx2){
		ll ans = abs(min_pos - index2);
		cout << ans << endl;
	}
	
	else{
		ll ans = max({abs(1-max_pos), abs(n-max_pos), abs(1-min_pos), abs(n-min_pos)});
		cout << ans << endl;
	}
}
