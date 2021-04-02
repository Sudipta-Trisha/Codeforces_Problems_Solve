
// Problem: A. Kitahara Haruki's Gift
// Contest: Codeforces - Codeforces Round #248 (Div. 2)
// URL: https://codeforces.com/problemset/problem/433/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll a[n], sum=0;
	ll cnt_100 = 0, cnt_200=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] == 100) cnt_100++;
		else cnt_200++;
	}

	if(cnt_100 == 0 && cnt_200>0 && cnt_200 % 2 == 0 ) cout << "YES" << endl;
	else if(cnt_100 > 0 && cnt_100%2==0) cout << "YES" << endl;
	else cout << "NO" << endl;
}