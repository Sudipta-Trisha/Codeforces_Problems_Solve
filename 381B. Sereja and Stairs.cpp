
// Problem: B. Sereja and Stairs
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n], cnt[100005]={0};
	
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	
	sort(a,a+n);
	
	vector<ll>front,back;
	bool vis[100005];
	memset(vis,false,sizeof(vis));
	
	ll mx_cnt = cnt[a[n-1]];
	ll sz = n - mx_cnt;
	
	back.push_back(a[n-1]);
	
	for(ll i=sz-1; i>=0; i--){
		
		if( cnt[a[i]] == 1 && vis[a[i]] == false){
			
			front.push_back(a[i]);
			
			cnt[a[i]]--;
			vis[a[i]] = true;
		}
		
	    if( cnt[a[i]] >= 2 && vis[a[i]] == false) {
	    	
			front.push_back(a[i]);
			back.push_back(a[i]);
			
			cnt[a[i]] -= 2;
			vis[a[i]] = true;
		}
	}	
	
	sort(front.begin(), front.end());
	
	cout << front.size() + back.size() << endl;
	
	for(auto x: front) cout << x << " ";
	for(auto x: back) cout << x << " ";
	
	cout << endl;
	
}
