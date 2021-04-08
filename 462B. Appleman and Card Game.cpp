
// Problem: B. Appleman and Card Game
// Contest: Codeforces - Codeforces Round #263 (Div. 2)
// URL: https://codeforces.com/problemset/problem/462/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    return a.second > b.second;
}

int main()
{
	ll n,k;
	cin >> n >> k;
	
	string s;
	cin >> s;

	
	map<char,int>mp;
	for(ll i=0; i<n; i++){
		mp[s[i]]++;
	}
	
	vector<pair<char, int> > v;
	for (auto& it : mp) {
        v.push_back(it);
    }
    
    sort(v.begin(), v.end(), cmp);
    
    ll ans=0;
    for (auto& it : v) {
    	ll temp = it.second;

		if(temp <= k){
			k = k - temp;
			ans = ans + (temp*temp);
		}
		
		else if( temp > k && k>0){
			ans = ans + (k*k);
			k -= k;
		}
	}
	
	cout << ans << endl;
	
}