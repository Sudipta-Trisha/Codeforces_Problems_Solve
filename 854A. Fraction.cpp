
// Problem: A. Fraction
// Contest: Codeforces - Codeforces Round #433 (Div. 2, based on Olympiad of Metropolises)
// URL: https://codeforces.com/problemset/problem/854/A
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int temp = n/2;
		for(int i=temp; i>=1; i--){
			if(__gcd(i,n-i) == 1){
				cout << i << " " << n-i << endl;
				break;
			}
		}
	
}