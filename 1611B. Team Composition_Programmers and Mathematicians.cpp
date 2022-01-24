
// Problem: B. Team Composition: Programmers and Mathematicians
// Contest: Codeforces - Codeforces Round #756 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1611/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll a,b;
	cin >> a >> b;
	
	if(b > a) swap(a,b);
	
	ll temp = (a+b)/4;
	cout << min(temp , b) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	ll test;
	cin >> test;
	
	while(test--) {
		solve();
	}	
}
