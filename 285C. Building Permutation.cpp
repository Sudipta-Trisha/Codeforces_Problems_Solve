
// Problem: C. Building Permutation
// Contest: Codeforces - Codeforces Round #175 (Div. 2)
// URL: https://codeforces.com/problemset/problem/285/C
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
	
	ll a[n],b[n];
	for(ll i=0; i<n; i++)
		cin >> a[i];
		
	sort(a,a+n);
	ll diff = 0;
	
	for(ll i=0; i<n; i++)
		b[i] = i+1;
	
	for(ll i=0; i<n; i++){
		diff = diff + abs(a[i]-b[i]);
	}
	cout << diff << endl;
}
