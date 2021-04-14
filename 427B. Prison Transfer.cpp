
// Problem: B. Prison Transfer
// Contest: Codeforces - Codeforces Round #244 (Div. 2)
// URL: https://codeforces.com/problemset/problem/427/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,t,c;
	cin >> n >> t >> c;
	
	ll a[n], cnt=0, res=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] <= t){
			cnt++;
		}
		else cnt = 0;
		
		if(cnt>=c) res++;
	}
	cout << res << endl;
}
