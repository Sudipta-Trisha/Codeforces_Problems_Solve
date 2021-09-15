
// Problem: A. Pretty Permutations
// Contest: Codeforces - Codeforces Round #728 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1541/A
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
	
	vector<ll>num;
	ll temp = 1;
	for(ll i=0; i<n && temp<=n; i++) {
		num.push_back(temp);
		temp++;
	}
	
	for(ll i=0; i<n-1; i+=2) {
		swap(num[i],num[i+1]);
	}
	if(n%2==1) {
		swap(num[n-2],num[n-1]);
	}
	
	for(ll i=0; i<n-1; i++) {
		cout << num[i] << " ";
	}
	cout << num[n-1] << endl;
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
