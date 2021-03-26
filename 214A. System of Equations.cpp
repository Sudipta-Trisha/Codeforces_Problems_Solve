
// Problem: A. System of Equations
// Contest: Codeforces - Codeforces Round #131 (Div. 2)
// URL: https://codeforces.com/problemset/problem/214/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	ll cnt=0;
	for(ll i=0; i<=sqrt(n)+1; i++){
		for(ll j=0; j<=sqrt(m)+1; j++){
			if(((i*i) + j == n) && (i + (j*j) == m)){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}