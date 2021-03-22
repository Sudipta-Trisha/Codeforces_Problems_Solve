
// Problem: A. Panoramix's Prediction
// Contest: Codeforces - Codeforces Beta Round #69 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/80/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	
	int n,m;
	cin >> n >> m;
	for(int i=0; i<15; i++){
		if(n == prime[i] && m == prime[i+1]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}