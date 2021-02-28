
// Problem: B. New Theatre Square
// Contest: Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1359/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n,m,x,y;
		cin >> n >> m >> x >> y;
		char ch[n][m];
		ll sum = 0, temp=0;
		
		for(ll i=0; i<n; i++){
			for(ll j=0; j<m; j++){
				cin >> ch[i][j];
			}
		}
		
		for(ll i=0; i<n; i++){
			for(ll j=0; j<m-1; j++){
				if(ch[i][j] == '.' && ch[i][j+1] == '.'){
					sum = sum + min(y,(2*x));
					ch[i][j] = '*';
					ch[i][j+1] = '*';
				}				
			}
		}
		
		for(ll i=0; i<n; i++){
			for(ll j=0; j<m; j++){
				if(ch[i][j] == '.'){
					sum = sum + x;
				}				
			}
		}
// 		
		// for(ll i=0; i<n; i++){
			// for(ll j=0; j<m; j++){
				// cout << ch[i][j] << " ";
			// }
			// cout << endl;
		// }
		
		cout << sum << endl;
	}
}