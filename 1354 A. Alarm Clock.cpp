
// Problem: A. Alarm Clock
// Contest: Codeforces - Educational Codeforces Round 87 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1354/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll test;
	cin >> test;
	while(test--){
		ll a,b,c,d;
		cin >> a >> b >> c >> d;
		
		if(b >= a) {
			cout << b << endl;
		}
		else if(a > b && c<=d){
			cout << "-1" << endl;
		}
		
		else{
			ll diff = a - b;
			ll sleep_time = c - d;
			
			ll div = diff/sleep_time;
			
			if(diff%sleep_time != 0){
				div++;
			} 
			
			cout << b + (div*c) << endl;
		}
	}
}