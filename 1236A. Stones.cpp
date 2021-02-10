
// Problem: A. Stones
// Contest: Codeforces - Codeforces Round #593 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1236/A
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
		int a ,b, c,cnt=0;
		cin >> a >> b >> c;
		
		while(b>0 && c >1){
			cnt = cnt + 3;
			b = b - 1;
			c = c - 2;
		}
			
		while(a>0 && b > 1){
			cnt = cnt + 3;
			a = a - 1;
			b = b - 2;
		}
		cout << cnt << endl;
			
	}	
}