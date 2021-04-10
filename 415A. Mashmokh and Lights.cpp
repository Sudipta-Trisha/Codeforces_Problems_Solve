
// Problem: A. Mashmokh and Lights
// Contest: Codeforces - Codeforces Round #240 (Div. 2)
// URL: https://codeforces.com/problemset/problem/415/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, m;
	cin >> n >> m;
	
	ll a[n+1] = {0},b[m];
	
	for(ll i=0; i<m; i++){
		cin >> b[i];
		
		for(ll j=b[i]; j<n+1; j++){
			if(a[j-1] == 0)
				a[j-1] = b[i];
		}
	}
	
	for(ll i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
