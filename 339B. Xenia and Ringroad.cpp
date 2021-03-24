
// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	ll pos = 1,ans=0;
	for(ll i=0; i<m; i++){
		ll num;
		cin >> num;
		
		if(num >= pos) {
			ans = ans + (num-pos);
		}
		else{
			ans += n-(pos-num);
		}
		pos = num;
	}
	cout << ans << endl;
}