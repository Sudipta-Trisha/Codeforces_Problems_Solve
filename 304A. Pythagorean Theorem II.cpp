
// Problem: A. Pythagorean Theorem II
// Contest: Codeforces - Codeforces Round #183 (Div. 2)
// URL: https://codeforces.com/problemset/problem/304/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll cnt = 0;
	
	for(ll i=1; i<n; i++){
		for(ll j=i+1; j<=n; j++){
			ll temp = (i*i) + (j*j);
			ll c = sqrt(temp);
			
			if(c*c == temp && c<= n){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
