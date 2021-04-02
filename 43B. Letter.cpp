
// Problem: B. Letter
// Contest: Codeforces - Codeforces Beta Round #42 (Div. 2)
// URL: https://codeforces.com/problemset/problem/43/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	
	map<char,int>mp;
	for(ll i=0; i<s1.length(); i++){
		mp[s1[i]]++;
	}
	
	for(ll i=0; i<s2.length(); i++){
		if(mp[s2[i]] > 0 || s2[i] == ' '){
			mp[s2[i]]--;
			continue;
		}
		
		else{
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl;
}