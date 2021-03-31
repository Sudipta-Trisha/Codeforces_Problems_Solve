
// Problem: A. GCD Sum
// Contest: Codeforces - CodeCraft-21 and Codeforces Round #711 (Div. 2)
// URL: https://codeforces.com/contest/1498/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd_sum(ll n)
{
	ll temp = n,cnt = 0;
	
	while(temp > 0){
		ll rem = temp%10;
		cnt += rem;
		temp = temp / 10;
	}
	
	ll ans = __gcd(n,cnt);
	return ans;
}

int main()
{
	ll n;
	cin >> n;
	
	while(n--){
		ll num;
		cin >> num;
		
		if(gcd_sum(num) != 1) cout << num << endl;
		else if(gcd_sum(num+1) != 1) cout << num + 1 << endl;
		else if(gcd_sum(num+2) != 1) cout << num + 2 << endl;
	}
}