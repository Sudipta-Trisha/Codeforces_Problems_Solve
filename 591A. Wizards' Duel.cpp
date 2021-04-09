
// Problem: A. Wizards' Duel
// Contest: Codeforces - Codeforces Round #327 (Div. 2)
// URL: https://codeforces.com/problemset/problem/591/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	double l,p,q;
	cin >> l >> p >> q;
	
	double temp = l / (p+q);
	
	cout << temp * p << endl;
	return 0;
}
