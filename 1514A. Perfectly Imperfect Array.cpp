
// Problem: A. Perfectly Imperfect Array
// Contest: Codeforces - Codeforces Round #716 (Div. 2)
// URL: https://codeforces.com/contest/1514/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool not_sqr(ll num)
{
	bool flag = true;
	for(ll i=1; i<=sqrt(num); i++){
		if(i*i == num){
			flag = false;
			break;
		}
	}
	return flag;
}

void solve()
{
	ll n;
	cin >> n;
	ll a[n];
	
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(ll i=0; i<n; i++){
		if(not_sqr(a[i])) {
			cout << "YES" << endl;
			return ;
		}
	}
 	cout << "NO" << endl;
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
