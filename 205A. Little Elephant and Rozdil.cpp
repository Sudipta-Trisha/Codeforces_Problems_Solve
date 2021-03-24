
// Problem: A. Little Elephant and Rozdil
// Contest: Codeforces - Codeforces Round #129 (Div. 2)
// URL: https://codeforces.com/problemset/problem/205/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	
	ll mini = *min_element(a,a+n), cnt=0, index=0;
	for(ll i=0; i<n; i++){
		if(mini == a[i]) {
			cnt++;
			index = i+1;
		}
	}
	
	if(cnt > 1) cout << "Still Rozdil" << endl;
	else cout << index << endl;
}