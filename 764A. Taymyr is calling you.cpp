
// Problem: A. Taymyr is calling you
// Contest: Codeforces - Codeforces Round #395 (Div. 2)
// URL: https://codeforces.com/problemset/problem/764/A
// Memory Limit: 255 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,z;
	cin >> n >> m >> z;
	
	int ans = z / ((n*m)/(__gcd(n,m)));
	cout << ans << endl;
}