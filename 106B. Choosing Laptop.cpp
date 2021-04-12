
// Problem: B. Choosing Laptop
// Contest: Codeforces - Codeforces Beta Round #82 (Div. 2)
// URL: https://codeforces.com/problemset/problem/106/B
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
	
	ll pro_speed[n], ram[n], hdd[n], cost[n];
	for(ll i=0; i<n; i++){
		cin >> pro_speed[i] >> ram[i] >> hdd[i] >> cost[i];
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(pro_speed[i] < pro_speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j])
				cost[i] = 2000;
		}
	}
	
	ll mn_cost = INT_MAX, index;
	for(ll i=0; i<n; i++){
		if(mn_cost > cost[i]){
			mn_cost = cost[i];
			index = i+1;
		}
	}
	
	cout << index << endl;
}
