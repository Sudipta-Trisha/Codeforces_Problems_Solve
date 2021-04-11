// Problem: A. Buggy Sorting
// Contest: Codeforces - Codeforces Round #151 (Div. 2)
// URL: https://codeforces.com/problemset/problem/246/A
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
	
	if(n < 3){
		cout << "-1" << endl;
	}
	
	else{
		for(ll i=n; i>=1; i--){
			cout << i << " ";
		}
		cout << endl;
	}
}
