
// Problem: A. Vitaly and Night
// Contest: Codeforces - Codeforces Round #330 (Div. 2)
// URL: https://codeforces.com/problemset/problem/595/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	ll cnt = 0;
	while(n--){
		ll a[2*m];
		for(ll i=0; i<2*m; i++){
			cin >> a[i];
		}
		
		for(ll i=0; i<2*m; i+=2){
			if(a[i] == 1 || a[i+1] == 1) cnt++;
		}
	}
	
	cout << cnt << endl;
}
