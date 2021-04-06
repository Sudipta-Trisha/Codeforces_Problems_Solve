
// Problem: A. IQ Test
// Contest: Codeforces - Codeforces Round #176 (Div. 2)
// URL: https://codeforces.com/problemset/problem/287/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	char a[6][6];
	for(ll i=0; i<4; i++){
		for(ll j=0; j<4; j++){
			cin >> a[i][j];
		}
	}
	
	bool flag = false;
	for(ll i=0; i<3; i++){
		for(ll j=0; j<3; j++){
			ll hash=0, dot=0;
			
			if(a[i][j] == '.') dot++; 
			else hash++;
			
			if(a[i][j+1] == '.') dot++; 
			else hash++;
			
			if(a[i+1][j] == '.') dot++; 
			else hash++;
		
			if(a[i+1][j+1] == '.') dot++; 
			else hash++;
			
			if(hash >= 3 || dot >= 3) {
				flag = true;
				break;
			}
		}
		
		if(flag) break;
	}
	
	if(flag == true) cout << "YES" << endl;
	else cout << "NO" << endl;
}