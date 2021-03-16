
// Problem: A. Music
// Contest: Codeforces - Codeforces Round #315 (Div. 2)
// URL: https://codeforces.com/contest/569/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,s,q;
	cin >> t >>s >> q;
	
	int cnt=0;
	
	while(s<t){
		s = s*q;
		cnt++;
	}
	cout << cnt << endl;
}