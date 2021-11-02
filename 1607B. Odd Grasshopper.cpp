
// Problem: B. Odd Grasshopper
// Contest: Codeforces - Codeforces Round #753 (Div. 3)
// URL: https://codeforces.com/contest/1607/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll x,n;
	cin >> x >> n;
	
	ll temp = (n/4)*4 + 1;
	while(temp <= n) {
		if(x % 2 == 0)  x = x - temp;
		else x+=temp;
		
		temp++;
	}
	
	cout << x << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
