
// Problem: A. Whose sentence is it?
// Contest: Codeforces - Codeforces Round #185 (Div. 2)
// URL: https://codeforces.com/problemset/problem/312/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll test;
	cin >> test;
	
	string s;
	getline(cin,s);
	
	while(test--){
		
		getline(cin,s);
		ll sz = s.length();
		bool flag1 = false, flag2 = false;
		
		if(sz > 4){
			if(s.substr(sz-5,5) == "lala."){
				flag1 =  true;
			}
			
			if(s.substr(0,5) == "miao."){
				flag2 = true;
			}
		}
		
		if(flag1==true && flag2 == false){
			cout << "Freda's" << endl;
		}
		
		else if(flag1==false && flag2 == true){
			cout << "Rainbow's" << endl;
		}	
		
		else {
			cout << "OMG>.< I don't know!" << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
