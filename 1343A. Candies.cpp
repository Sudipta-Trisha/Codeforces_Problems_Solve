
// Problem: A. Candies
// Contest: Codeforces - Codeforces Round #636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll n;
		cin >> n;
		ll sum = 1;
		
		for(ll i=2; i<=29; i++){
			ll temp = pow(2,i-1);
			sum += temp;
			if(n%sum == 0){
				cout << n/sum << endl;
				break;
			}
		}
	}
}