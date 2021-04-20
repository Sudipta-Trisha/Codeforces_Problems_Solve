
// Problem: A. Polo the Penguin and Strings
// Contest: Codeforces - Codeforces Round #177 (Div. 1)
// URL: https://codeforces.com/problemset/problem/288/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,k;
	cin >> n >> k;
	
	if(n < k || (k==1 && n>1)){
		cout << "-1" << endl;
	}
	
	else if(k == 1 && n ==1){
		cout << "a" << endl;
	}
	
	else{
		ll sz = n - (k-2);
		k = k -2;
		for(ll i=0; i<sz; i++){
			if(i%2 == 0) cout << "a";
			else cout << "b";
		}
		
		for(ll i=0; i<k; i++){
			char ch = 'c' + i;
			cout << ch;
		}
	}
	
	cout << endl;
}
