
// Problem: A. Polycarp and Coins
// Contest: Codeforces - Codeforces Round #734 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1551/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll num;
	cin >> num;
	
	ll c1 = num%3, c2;
	
	if(c1 == 0) {
		cout << num/3 << " " << num/3 << endl;	
	}
	
	else if(c1 == 1) {
		c1 = (num/3) + 1;
		cout << c1 << " " << (num-c1)/2 << endl;
	}
	
	else if(c1 == 2) {
		c2 = (num/3) + 1;
		cout << num - (c2*2) << " " << c2 << endl;
	}
	
	
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
