
// Problem: B. MIN-MEX Cut
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/problemset/problem/1566/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string s;
	cin >> s;
	
	ll cnt_zero=0;
	for(ll i=0; i<s.length(); i++) {
		if(s[i] == '0') cnt_zero++;
	}
	
	if(cnt_zero == 0) cout << "0" << endl;
	
	else{
		ll cnt = 0;
		for(ll i=0; i<s.length(); i++) {
			if(s[i] == '0') {
				cnt++;
				if(s[i+1] == '1'){
					break;
				}
			}
		}
		
		if(cnt == cnt_zero) cout << "1" << endl;
		else cout << "2" << endl;
	}
	
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
