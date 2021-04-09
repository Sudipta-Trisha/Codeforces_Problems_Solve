
// Problem: A. LLPS
// Contest: Codeforces - Codeforces Round #127 (Div. 2)
// URL: https://codeforces.com/problemset/problem/202/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	sort(s.begin(),s.end());
	
	map<char,int>mp;
	for(ll i=0; i<s.length(); i++){
		mp[s[i]]++;
	}
	
	// for(auto x=mp.begin(); x!=mp.end(); x++){
		// cout <<x->first << " " << x->second << endl;
	// }
	
	ll n = s.length();
	for(auto it=mp.rbegin(); it!=mp.rend(); it++){
		ll temp = it->second;
		
		for(ll i=0; i<temp; i++){
			cout << it->first;
		}
		cout << endl;
		return 0;
	}		
}