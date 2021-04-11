// Problem: B. Almost Rectangle
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n;
		cin >> n;
		
		ll r1,r2,c1,c2,cnt=0;
		char a[n][n];
		for(ll i=0; i<n; i++){
			for(ll j=0; j<n; j++){
				cin >> a[i][j];
				if(a[i][j] == '*'){
					cnt++;
					if(cnt == 1) {
						r1 = i+1, c1 = j+1;
					}
					else r2 = i+1, c2 = j+1;
				}
			}
		}
		
		if(r1 == r2){
			if(r1 != n){
				r1++,r2++;
				a[r1-1][c1-1] = '*';
				a[r2-1][c2-1] = '*';
			}
			
			else{
				r1--;
				r2--;
				a[r1-1][c1-1] = '*';
				a[r2-1][c2-1] = '*';
			}
		}
		
		else if(c1 == c2){
			if(c1  != n){
				c1++,c2++;
				a[r1-1][c1-1] = '*';
				a[r2-1][c2-1] = '*';
			}
			
			else{
				c1--,c2--;
				a[r1-1][c1-1] = '*';
				a[r2-1][c2-1] = '*';
			}
		}
		
		else{
			a[r1-1][c2-1] = '*';
			a[r2-1][c1-1] = '*';
		}
		
		for(ll i=0; i<n; i++){
			for(ll j=0; j<n; j++){
				cout << a[i][j];
			}
			cout << endl;
		}
		//cout << endl;
	}
}