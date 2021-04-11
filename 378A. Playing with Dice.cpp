// Problem: A. Playing with Dice
// Contest: Codeforces - Codeforces Round #222 (Div. 2)
// URL: https://codeforces.com/problemset/problem/378/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll a,b;
	cin >> a >> b;
	
	ll first = 0, second = 0, draw = 0;
	
	for(ll i=1; i<=6; i++){
		if(abs(a-i) < abs(b-i))
			first++;
		else if(abs(a-i) > abs(b-i))
			second++;
		else 
			draw++;
	}
	
	cout << first << " " << draw << " " << second << endl;
	return 0;
}
