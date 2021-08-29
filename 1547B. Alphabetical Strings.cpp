
// Problem: B. Alphabetical Strings
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1547/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string s;
	cin >> s;
	
	ll len = s.length(),pos;
	string str = "";
	bool flag = false;
	
	for(ll i=0; i<len; i++) {
		if(s[i] == 'a') {
			flag = true;
			pos = i;
		}
	}
	
	if(flag == false) {
		cout << "NO" << endl;
		return;
	}
	
	ll left = pos;
	ll right = left;
	
	for(ll i=1; i<len; i++) {
		pos = s.find(char('a'+i));
		if(pos == -1 || (pos != (left-1) && pos != (right+1))){
			flag = false;
			cout << "NO" << endl;
			return;
		}
		else{
			flag = true;
			left = min(left,pos);
			right = max(right,pos);
		}
	}
	
	if(flag == true) cout << "YES" << endl;
	else cout << "NO" << endl;
	
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
