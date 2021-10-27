
// Problem: A. Two Subsequences
// Contest: Codeforces - Codeforces Round #751 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1602/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string str;
	cin >> str;
	
	string s1 = "";
	s1 = str;
	sort(s1.begin(),s1.end());
	
	ll temp;
	for(ll i=0; i<str.length(); i++) {
		if(s1[0] == str[i]) {
			temp = i;
			break;
		}
	}
	
	str.erase(str.begin() + temp);
	cout << s1[0] << " " << str << endl;
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
