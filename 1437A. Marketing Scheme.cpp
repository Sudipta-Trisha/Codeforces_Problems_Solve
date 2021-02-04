
// Problem: A. Marketing Scheme
// Contest: Codeforces - Educational Codeforces Round 97 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1437/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll test;
	cin>> test;
	
	while(test--){
		ll a , b;
		cin >> a >> b;
		
		if(2 * a > b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
