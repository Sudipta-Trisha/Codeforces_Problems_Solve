
// Problem: B. Unlucky Ticket
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	string s;
	cin >> s;
	
	string first,second;
	first = s.substr(0,n);
	second = s.substr(n,2*n);
	
	sort(first.begin(),first.end());
	sort(second.begin(),second.end());
	
	bool less = true, more = true;
	
	for(ll i=0; i<n; i++){
		if(first[i] >= second[i]){
			less = false;
			break;
		}
	}
	
	for(ll i=0; i<n; i++){
		if(first[i] <= second[i]){
			more = false;
			break;
		}
	}
	
	if(less == false && more == false){
		cout << "NO" << endl;
	}
	
	else cout << "YES" << endl;
}
