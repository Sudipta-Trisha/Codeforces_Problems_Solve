
// Problem: B. Bear and Finding Criminals
// Contest: Codeforces - Codeforces Round #356 (Div. 2)
// URL: https://codeforces.com/problemset/problem/680/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, a;
	cin >> n >> a ;
	
	ll crim[n+4],total=0;
	for(ll i=1; i<=n; i++) cin >> crim[i];
	
	for(ll i=1; i<=n; i++){
		if(a-i > 0 && a+i <= n){
			if(crim[a-i]== 1 && crim[a+i]==1)
				total = total + 2;
		}
		
		else if(a-i <=0 && a+i <= n) {
			if(crim[a+i] == 1)
				total++;
		}
		
		else if(a-i > 0 && a+i > n){
			if(crim[a-i] == 1) total++;
		}
	}
	
	if(crim[a] == 1) total++;
	
	cout << total << endl;
}
