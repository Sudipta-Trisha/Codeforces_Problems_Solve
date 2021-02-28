
// Problem: A. Kuroni and the Gifts
// Contest: Codeforces - Ozon Tech Challenge 2020 (Div.1 + Div.2, Rated, T-shirts + prizes!)
// URL: https://codeforces.com/problemset/problem/1305/A
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
		int n;
		cin >> n;
		
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		
		for(int i=0; i<n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}