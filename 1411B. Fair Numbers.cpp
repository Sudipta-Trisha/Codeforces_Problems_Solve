
// Problem: B. Fair Numbers
// Contest: Codeforces - Technocup 2021 - Elimination Round 3
// URL: https://codeforces.com/problemset/problem/1411/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool find(ll n)
{
	ll temp = n;
	while(n>0){
		ll rem = n%10;
		
		if(rem == 0){
			n/=10;
			continue;
		}
		
		if(temp%rem != 0){
			return false;
		}
		n = n / 10;
	}
	return true;
}

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n;
		cin >> n;
		
		while(!find(n)){
			n++;
		}
		cout << n << endl;
	}
}