
// Problem: A. Petr and Book
// Contest: Codeforces - Codeforces Beta Round #99 (Div. 2)
// URL: https://codeforces.com/problemset/problem/139/A
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
	
	vector<ll>v(8,0);
	for(ll i=1; i<=7; i++){
		cin >> v[i];
	}
	
	ll sum=0;
	for(ll i=0; i<=7; i++){
		sum += v[i];
		if(sum >= n){
			cout << i << endl;
			break;
		}
		i= i%7;
		
	}
	
	return 0;
}