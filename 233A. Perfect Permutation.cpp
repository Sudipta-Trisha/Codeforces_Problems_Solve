
// Problem: A. Perfect Permutation
// Contest: Codeforces - Codeforces Round #144 (Div. 2)
// URL: https://codeforces.com/problemset/problem/233/A
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
	if(n%2 == 1) {
		cout << "-1" << endl;
		return 0;
	}
	
	else if(n%2==0){
		for(ll i=n; i>=1; i--){
			cout << i << " ";
		}
		cout << endl;
		return 0;
	}
	
}