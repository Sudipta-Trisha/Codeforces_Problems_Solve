// Problem: A. Domino on Windowsill
// Contest: Codeforces - Educational Codeforces Round 106 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1499/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n,k1,k2,w,b;
		cin >> n >> k1 >> k2 >> w >> b;
		
		int total_cell = 2*n;
		
		int total_white = k1+k2;
		int total_black = total_cell - total_white;
		
		if((2*w)<=total_white && (2*b)<=total_black){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
