
// Problem: A. Number of Apartments
// Contest: Codeforces - Educational Codeforces Round 96 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1430/A
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
		int n;
		cin >> n;
		
		if( n == 1 || n == 2 || n == 4)
			cout << "-1" << endl;
		else{
			if (n%3 == 0) cout << (n/3) << " 0 " << "0" << endl;
			else if (n%3 == 1) cout << ((n-7)/3) << " 0 " << "1" << endl;
			else cout << ((n-5)/3) << " 1 " << "0" << endl;
		}
	}
}