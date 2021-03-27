
// Problem: B. Jeff and Periods
// Contest: Codeforces - Codeforces Round #204 (Div. 2)
// URL: https://codeforces.com/problemset/problem/352/B
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
	
	ll a[n];
	map<ll, vector<ll>>mp;
	for(ll i=0; i<n; i++){
		cin >> a[i];
		mp[a[i]].push_back(i);
	}
	
	vector<pair<ll,ll>>vp;
	
	for(auto it=mp.begin(); it!=mp.end(); it++){
		ll temp = it->first;
		if(mp[temp].size() == 1){
			vp.push_back({temp,0});
		}
		else{
			ll diff = mp[temp][1] - mp[temp][0];
			for(ll i=2; i<mp[temp].size(); i++){
				if(mp[temp][i] - mp[temp][i-1] != diff){
					diff = -1;
					break;
				}
			}
			if(diff != -1)
				vp.push_back({temp,diff});
		}
	}
	
	cout << vp.size() << endl;
	for(ll i=0; i<vp.size(); i++){
		cout << vp[i].first << " " << vp[i].second << endl;
	}
	
	
	
}