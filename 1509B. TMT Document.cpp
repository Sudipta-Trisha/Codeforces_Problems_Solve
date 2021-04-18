
// Problem: B. TMT Document
// Contest: Codeforces - Codeforces Round #715 (Div. 2)
// URL: https://codeforces.com/contest/1509/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	string s;
	cin >> s;
	
	ll cnt_t=0, cnt_m = 0, cnt = 0;
	for(auto x: s){
		if(x == 'T') cnt_t++;
		else cnt_m++;
	}
	
	if(cnt_m*2 != cnt_t) {
		cout << "NO" << endl;
		return ;
	}
	
	for(auto x: s){
		if(x == 'T') cnt++;
		else cnt--;
		
		if(cnt < 0) {
			cout << "NO" << endl;
			return ;
		}
	}
	
	cnt = 0;
	
	reverse(s.begin(), s.end());
	for(auto x: s){
		if(x == 'T') cnt++;
		else cnt--;
		
		if(cnt < 0) {
			cout << "NO" << endl;
			return ;
		}
	}
	
	cout << "YES" << endl;
	return ;
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
