
// Problem: A. Circle of Students
// Contest: Codeforces - Codeforces Round #579 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1203/A
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
	
	ll a[n] , index;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}
	
	ll clock_wise=1, counter_clock_wise = 1;
	
	for(ll i=0; i<n-1; i++){
		if(a[i] == a[i+1] + 1) counter_clock_wise++;
		else if(a[i]+1 == a[i+1]) clock_wise++;
	}
	
	if(clock_wise >= n-1 || counter_clock_wise >= n-1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--)
		solve();
}
