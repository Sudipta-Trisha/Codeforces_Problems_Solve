
// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round #42 (Div. 2)
// URL: https://codeforces.com/problemset/problem/43/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	map<string,int>mp;
	string s,ans;
	int maxx = 0;
	
	for(int i=0; i<n; i++){
		cin >> s;
		mp[s]++;
	}
	
	for(auto it=mp.begin(); it!=mp.end(); it++){
		if(it->second > maxx){
			maxx = it->second;
			ans = it->first;
		}
	}
	cout << ans << endl;
}