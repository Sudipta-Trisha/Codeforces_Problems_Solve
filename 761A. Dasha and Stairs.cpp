
// Problem: A. Dasha and Stairs
// Contest: Codeforces - Codeforces Round #394 (Div. 2)
// URL: https://codeforces.com/problemset/problem/761/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int ans = abs(a-b);
	
	if(ans > 1 || (a==0 && b==0)){
		cout << "NO" << endl;
	}
	else cout << "YES" << endl;
}