
// Problem: A. Domino
// Contest: Codeforces - Codeforces Round #205 (Div. 2)
// URL: https://codeforces.com/problemset/problem/353/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll s1=0, s2=0;
	bool flag(false);
	
	for(ll i=1; i<=n; i++){
		ll x,y;
		cin >> x >> y;
		
		if(n == 1 && (x%2+y%2) == 1) {
			cout << "-1" << endl;
			return 0;
		}
		
		else if((x%2+y%2) == 1){
			flag = true;
		}
		
		s1 += x;
		s2 += y;
	}
	
	if(s1%2==0 && s2%2==0) cout << "0" << endl;
	else if((s1%2 == 1 && s2%2 == 1) && flag==true) cout << "1" << endl;
	else cout << "-1" << endl;

}
