// Problem: A. Adding Digits
// Contest: Codeforces - Codeforces Round #158 (Div. 2)
// URL: https://codeforces.com/problemset/problem/260/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll a,b,n;
	cin >> a >> b >> n;
	
	for(ll i=0; i<=9; i++){
		ll temp = a*10 + i;
		
		if(temp%b == 0){
			cout << temp;
			for(ll j=2; j<=n; j++){
				cout << 0;
			}
			cout << endl;
			return 0;
		}
	}
	
	cout << "-1" << endl;
}
