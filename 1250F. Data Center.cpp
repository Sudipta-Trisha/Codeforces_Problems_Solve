
// Problem: F. Data Center
// Contest: Codeforces - 2019-2020 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1250/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int 
#define sz 100005
using namespace std;

int main()
{
	ll n;
	cin >> n;
	
	ll a,b,dif=100005;
	
	for(ll i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			a = (n/i), b = i;
			dif = min(dif,(a-b));
		}
	}
	if(a*b == n){
		cout << 2*(a+b) << endl;
	}
	
	return 0;
}