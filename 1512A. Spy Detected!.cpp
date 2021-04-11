
// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n;
		cin >> n;
		
		ll a[n];
		map<ll,ll>cnt;
		for(ll i=0; i<n; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		
		ll value;
		for(auto it = cnt.begin(); it!=cnt.end(); it++){
			ll temp = it->second;
			if(temp == 1){
				value = it->first;
				break;
			}
		}
		
		for(ll i=0; i<n; i++){
			if(value == a[i]){
				cout << i+1 << endl;
				break;
 			}
		}
	}
	return 0;
}
