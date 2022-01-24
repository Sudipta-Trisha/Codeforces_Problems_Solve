
// Problem: C. Sum of Cubes
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll num;
	cin >> num;
	
	for(ll a=1; a<=cbrt(num); a++) {
		ll b = cbrt(num - (a*a*a));
		if((a*a*a) + (b*b*b) == num && (a!=0 && b!=0)){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
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
