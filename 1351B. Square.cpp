
// Problem: B. Square?
// Contest: Codeforces - Testing Round #16 (Unrated)
// URL: https://codeforces.com/problemset/problem/1351/B
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
		int a1,b1,a2,b2;
		cin >> a1 >> b1 >> a2 >> b2;
		
		int maxx1 = max(a1,b1);
		//cout << maxx1 << endl;
		int maxx2 = max(a2,b2);
		//cout << maxx1 << endl;
		
		int mn1 = min(a1,b1);
		int mn2 = min(a2,b2);
		
		if(maxx1 == maxx2){
			if((mn1+mn2) == maxx1)
				cout <<"Yes" << endl;
			else cout << "No" << endl;
		}
		else cout << "No" << endl;
	}
}