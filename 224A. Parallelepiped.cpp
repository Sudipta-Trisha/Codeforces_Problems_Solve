
// Problem: A. Parallelepiped
// Contest: Codeforces - Codeforces Round #138 (Div. 2)
// URL: https://codeforces.com/problemset/problem/224/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ab,bc,ca;
	cin >> ab >> bc >> ca;
	
	int a,b,c;
	
	a = sqrt((ab*ca)/bc);
	b = sqrt((ab*bc)/ca);
	c = sqrt((ca*bc)/ab);
	
	cout << 4*(a+b+c) << endl;
}