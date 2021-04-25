
// Problem: B. Vanya and Books
// Contest: Codeforces - Codeforces Round #308 (Div. 2)
// URL: https://codeforces.com/problemset/problem/552/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll get_pow(ll n)
{
	ll cnt = 0;
	while(n>0){
		n/=10;
		cnt++;
	}
	return cnt;
}

void solve()
{
	ll n;
	cin >> n;
	
	if(n < 10) cout << n << endl;
	else {
		ll power = get_pow(n),sum=0;
		for(ll i=0; i<power; i++){
			sum = sum + (pow(10,i));
		}
		
		cout << power*(n+1) - sum << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
