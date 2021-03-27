
// Problem: A. DZY Loves Chessboard
// Contest: Codeforces - Codeforces Round #254 (Div. 2)
// URL: https://codeforces.com/problemset/problem/445/A
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
	
	char v[120][120];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			cin >> v[i][j];
		}
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			if(v[i][j] == '.'){
				if((i+j)%2==0) v[i][j] = 'B';
				else v[i][j] = 'W';
			}
			// else if(v[i][j] == '.') v[i][j] = 'W';
			
		}
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			cout << v[i][j];
		}
		cout <<endl;
	}
	cout <<endl;
}