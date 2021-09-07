
// Problem: C. Deep Down Below
// Contest: Codeforces - Codeforces Round #740 (Div. 2, based on VK Cup 2021 - Final (Engine))
// URL: https://codeforces.com/problemset/problem/1561/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	vector<pair<ll,ll> >vp(n);
	
	for(ll j=0; j<n; j++){
		ll k;
		cin >> k;
		
		ll a[k],mx=-1;
		for(ll i=0; i<k; i++){
			cin >> a[i];
			mx = max(mx,a[i]-i+1);
			//cout << mx << endl;
		}
		
		vp[j] = {mx,k};
	}
	sort(vp.begin(),vp.end());
	
	ll l = vp[0].first, r = vp[n-1].first;
	ll ans;
	while(l<=r) {
		ll mid = (l+r)/2;
		ll curr = mid;
		bool flag = true;
		for(ll i=0; i<n; i++)
		{
			if(curr >= vp[i].first){
				curr += vp[i].second;
			}
			else{
				flag = false;
				break;
			}
		}
		if(flag == true) {
			ans = mid;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	
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
