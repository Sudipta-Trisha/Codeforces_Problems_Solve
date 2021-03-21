
// Problem: B. Restore Modulo
// Contest: Codeforces - Codeforces Round #709 (Div. 2, based on Technocup 2021 Final Round)
// URL: https://codeforces.com/contest/1484/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_sort(vector<ll>&a, vector<ll>&temp)
{
	for(ll i=0; i<a.size(); i++){
		if(a[i] != temp[i]){
			return false;
		}
	}
	return true;
}

bool desc_sort(vector<ll>&a, vector<ll>&temp)
{
	sort(temp.begin(),temp.end(),greater<int>());
	for(ll i=0; i<a.size(); i++){
		if(a[i] != temp[i]){
			return false;
		}
	}
	return true;
}

int main()
{
	ll test;
	cin >> test;
	while(test--){
		ll n;
		cin >> n;
		if(n == 1) {
			cout << "0" << endl;
			continue;
		}
		vector<ll>a(n);
		for(ll i=0; i<n; i++) cin >> a[i];
		//sort(a.begin(),a.end());
		
		vector<ll>temp;
		temp = a;
		sort(temp.begin(),temp.end());
		
		set<ll>s;
		ll cnt;
		for(int i=1; i<n; i++){
			cnt = abs(a[i] - a[i-1]);
			s.insert(cnt);
		}
		
		if((is_sort(a,temp) || desc_sort(a,temp)) && s.size() == 1){
			cout << "0" << endl;
		}
		
		else if((is_sort(a,temp) || desc_sort(a,temp)) && s.size() > 1) {
			cout << "-1" << endl;
		}
		
		else{
			ll c=0,m=0;
			bool flag = true;
			for(ll i=1; i<n; i++){
				if(a[i] < a[i-1] && a[i]<a[i+1]) {
					c = a[i+1] - a[i];
					m = a[i-1] + c - a[i];
					break;
				}
				else if(a[i] > a[i-1] && a[i] > a[i+1]){
					c = a[i] - a[i-1];
					m = a[i] + c - a[i+1];
					break;
				}
			}
			
			if(m != 0){
				for(ll i=0; i<n-1; i++){
					if(a[i+1] != (a[i]+c)%m){
						flag = false;
						break;
					}
				}
			}
			
			if(a[0]>=m) flag = false;
			if(flag == false || m == 0) cout << "-1" << endl;
			else cout << m << " " << c << endl;
		}
	}
}