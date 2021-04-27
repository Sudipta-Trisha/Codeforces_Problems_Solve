
// Problem: B. Strings of Power
// Contest: Codeforces - Codeforces Round #188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string s;
	cin >> s;
	
	ll n = s.length(),h=0,total=0;
	
	for(ll i=0; i<n; i++){
		if(s.substr(i,5) == "heavy") h++;
		else if(s.substr(i,5) == "metal") total += h;
	}
	
	cout << total << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
