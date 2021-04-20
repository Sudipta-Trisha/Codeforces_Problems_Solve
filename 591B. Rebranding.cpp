
// Problem: B. Rebranding
// Contest: Codeforces - Codeforces Round #327 (Div. 2)
// URL: https://codeforces.com/problemset/problem/591/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	char s[n];
	vector<char>v;
	for(ll i=0; i<n; i++) cin >> s[i];
	
	for(ll i=0; i<26; i++){
		v.push_back('a'+i);
	}
	
	while(m--){
		char x,y;
		cin >> x >> y;
		
		for(ll i=0; i<26; i++){
			if(v[i] == x) v[i] = y;
			else if(v[i] == y) v[i] = x;
		}
	
	}
	
	for(ll i=0; i<n; i++){
		s[i] = v[s[i] - 'a'];
		cout << s[i];
	}
	cout << endl;
}
