
// Problem: B. Fence
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,k;
	cin >> n >> k;
	
	ll a[n],sum=0,mn=INT_MAX,index;
	for(ll i=0; i<n; i++) cin >> a[i];
	
	for(ll i=0; i<k; i++){
		sum+=a[i];
	}
	
	for(ll i=1; i<n-k+2; i++){
		
		//cout << sum << endl;
		
		if(mn >= sum){
			mn = sum;
			index = i;
		}
		
		sum = sum - a[i-1];
		sum = sum + a[k+i-1];
	}
	
	cout << index << endl;
}
