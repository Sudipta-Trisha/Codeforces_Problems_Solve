
// Problem: B. Filya and Homework
// Contest: Codeforces - Codeforces Round #371 (Div. 2)
// URL: https://codeforces.com/problemset/problem/714/B
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
	set<ll>s;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	sort(a,a+n);
	
	if(s.size() >=0 && s.size() <=2) cout << "YES" << endl;
	else if(s.size() >= 4) cout << "NO" << endl;
	else if(s.size() == 3){
		vector<ll>v;
		for(auto x: s){
			v.push_back(x);
		}
		
		if(v[0]+v[2] == 2*v[1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
