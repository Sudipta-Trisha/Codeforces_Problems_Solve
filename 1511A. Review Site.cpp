
// Problem: A. Review Site
// Contest: Codeforces - Educational Codeforces Round 107 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1511/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	
	ll a[n],cnt1=0, cnt2=0,cnt3=0;
	for(ll i=0; i<n; i++){
		cin >> a[i];
		if(a[i] == 1) cnt1++;
		else if(a[i] == 2) cnt2++;
		else cnt3++;
	}
	
	ll total_vote = 0;
	if(cnt1 == 0 && cnt3 == 0 && cnt2 > 0) cout << 0 << endl;
	else {
		cout << cnt1 + cnt3 << endl;
	}
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
