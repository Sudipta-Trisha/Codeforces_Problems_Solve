
// Problem: B. Replace and Keep Sorted
// Contest: Codeforces - Codeforces Round #701 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1485/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,k;
	cin >> n >> q >> k;
	
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	
	int ans;
	while(q--){
		int l,r;
		cin >> l >> r;
		
		ans = a[r-1] - a[l-1] - 2*(r-l) -1;
		cout << ans+k << endl;
	}
}