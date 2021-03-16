
// Problem: A. Kyoya and Photobooks
// Contest: Codeforces - Codeforces Round #309 (Div. 2)
// URL: https://codeforces.com/problemset/problem/554/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int ans = (s.length()+1)*26;
	cout << ans-s.length() << endl;
}