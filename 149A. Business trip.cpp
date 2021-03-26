
// Problem: A. Business trip
// Contest: Codeforces - Codeforces Round #106 (Div. 2)
// URL: https://codeforces.com/problemset/problem/149/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll k;
	cin >> k;
	
	vector<ll>v(12);
	for(int i=0; i<12; i++){
		cin >> v[i];
	}
	
	sort(v.begin(),v.end(),greater<int>());
	
	ll cnt=0,sum=0;
	for(ll i=0; i<12; i++){
		if(sum >= k){
			break;
		}
		sum += v[i];
		cnt++;
	}
	if( sum < k) cout << "-1" << endl;
	else cout << cnt << endl;
}