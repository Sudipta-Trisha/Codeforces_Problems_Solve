
// Problem: A. Stone Game
// Contest: Codeforces - Codeforces Round #725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n];
	for(ll i=0; i<n; i++) cin >> a[i];
	
	ll mx = *max_element(a,a+n);
	ll mn = *min_element(a,a+n);
	
	ll mx_pos, mn_pos;
	for(ll i=0; i<n; i++) {
		if(a[i] == mx) {
			mx_pos = i+1;
		}
		
		if(a[i] == mn) {
			mn_pos = i+1;
		}
	}
	
	ll mov1,mov2,mov3,mov4;
	
	mov1 = max(mx_pos,mn_pos);
	mov2 = mn_pos + (n-mx_pos) +1;
	mov3 = mx_pos + (n-mn_pos) +1;
	mov4 = n - min(mx_pos,mn_pos) + 1;
	
	ll ans = min({mov1,mov2,mov3,mov4});
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
