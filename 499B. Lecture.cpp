// Problem: B. Lecture
// Contest: Codeforces - Codeforces Round #284 (Div. 2)
// URL: https://codeforces.com/problemset/problem/499/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin >> n >> m;
	
	vector< pair<string,string> > vp;
	//vector< pair<string,string> >::iterator it;
	
	for(ll i=0; i<m; i++){
		string a,b;
		cin >> a >> b;
		vp.push_back({a,b});
	}
	
	vector<string>v;
	
	for(ll i=0; i<n; i++){
		string a;
		cin >> a;
		
		v.push_back(a);
	}
	
	ll temp1, temp2;
	for(ll i=0; i<v.size(); i++){
		for(ll j=0; j<vp.size(); j++){
			string a = vp[j].first, b= vp[j].second;
			if(a == v[i] || b == v[i]){
				temp1 = a.length();
				temp2 = b.length();
				
				if(temp1 <= temp2) {
					cout << a << " ";
					break;
				}
				else {
					cout << b << " ";
					break;
				}
			}	
		}
	}
}
