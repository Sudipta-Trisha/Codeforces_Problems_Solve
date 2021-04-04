
// Problem: B. Increase and Decrease
// Contest: Codeforces - Codeforces Round #151 (Div. 2)
// URL: https://codeforces.com/problemset/problem/246/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n],sum=0;
	for(ll i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	
	if(sum % n == 0) cout << n << endl;
	else cout << n-1 << endl;

}
