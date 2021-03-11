
// Problem: A. Three Piles of Candies
// Contest: Codeforces - Codeforces Round #575 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1196/A
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
		ll a,b,c;
		cin >> a >> b >> c;
		
		cout << (a+b+c)/2 << endl;
	}
}