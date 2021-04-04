
// Problem: A. Boys and Girls
// Contest: Codeforces - Codeforces Round #154 (Div. 2)
// URL: https://codeforces.com/problemset/problem/253/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	
	ll n,m;
	cin >> n >> m;
	
	string s ="";
	if(n>m){
		for(ll i=0; i<n+m; i++){
			s += 'B';
		}

 		for(ll i=1; i<m*2; i+=2){
			s[i] = 'G';
		 }
	}
	
	else if(n == m){
		for(ll i=0; i<n+m; i++){
			s += 'B';
		}

 		for(ll i=0; i<n+m; i+=2){
			s[i] = 'G';
		 }
	}
	
	else{
		for(ll i=0; i<n+m; i++){
			s += 'G';
		}

 		for(ll i=1; i<n*2; i+=2){
			s[i] = 'B';
		 }
	}

	cout << s << endl;
}
