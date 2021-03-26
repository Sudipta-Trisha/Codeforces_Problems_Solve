
// Problem: A. k-String
// Contest: Codeforces - Codeforces Round #135 (Div. 2)
// URL: https://codeforces.com/problemset/problem/219/A
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
	
	string s;
	cin >> s;
	
	map<int,int>mp;
	for(ll i=0; i<s.length(); i++){
		mp[s[i]]++;
	}
	
	for(auto it=mp.begin(); it!=mp.end(); it++){
		ll temp = it->second;
		if(temp%k!=0){
			cout << "-1" << endl;
			return 0;
		}
	}
	
	string str = "";
	for(auto it=mp.begin(); it!=mp.end(); it++){
		for(ll i=1; i<=it->second/k; i++){
			str += (it->first);
		}
	}
	
	for(ll i=1; i<=k; i++){
		cout << str;
	}
	cout << endl;
	
	
	//cout <<  << endl;
}