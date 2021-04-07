// Problem: B. Kuriyama Mirai's Stones
// Contest: Codeforces - Codeforces Round #248 (Div. 2)
// URL: https://codeforces.com/problemset/problem/433/B
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
	ll a[n],non_sorted[n+1],sorted[n+1];
	ll cum_sum = 0;
	non_sorted[0] = 0;
	for(ll i=0; i<n; i++){
		cin >> a[i];
		cum_sum = cum_sum + a[i];
		non_sorted[i+1] = cum_sum;
	}
	
	sort(a,a+n);
	cum_sum = 0;
	sorted[0] = 0;
	for(ll i=0; i<n; i++){
		cum_sum = cum_sum + a[i];
		sorted[i+1] = cum_sum;
	}
	
	ll m;
	cin >> m;
	
	while(m--){
		ll type, l, r;
		cin >> type >> l >> r;
		
		if(type == 1){
			cout << non_sorted[r] - non_sorted[l-1] << endl;
		}
		
		else{
			cout << sorted[r] - sorted[l-1] << endl;
		}
	}
}
