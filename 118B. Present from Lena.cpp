
// Problem: B. Present from Lena
// Contest: Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/B
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
	
	for(ll i=-n; i<=n; i++){
		ll temp = n - abs(i);
		
		for(ll space=0; space<abs(i); space++){
			cout << "  ";
		}
		
		for(ll num=0; num<temp; num++){
			cout << num << " ";
		}
		
		for(ll num=temp; num>0; num--){
			cout << num << " ";
		}
		
		cout << 0 << endl;
	}
	
}