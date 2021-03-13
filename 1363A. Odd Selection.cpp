
// Problem: A. Odd Selection
// Contest: Codeforces - Codeforces Round #646 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1363/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n, x;
		cin >> n >> x;
		
		int odd = 0, even=0;
		for(int i=1; i<=n; i++){
			int a;
			cin >> a;
			
			if(a%2==0) even++;
			else odd++;
		}
		bool flag = false;
		for(int i=1; i<=odd && i<=x; i+=2){
			int rem = x - i;
			
			if(rem <= even) flag = true;
		}
		
		if(flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}