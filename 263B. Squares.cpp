
// Problem: B. Squares
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	
	bool flag = true;
	ll a[n];
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	
	sort(a,a+n,greater<int>());
	
	if(n < k) {
		cout << "-1" << endl;
		return 0;
	}
	
	cout << a[k-1] << " " << 0 << endl;
}
