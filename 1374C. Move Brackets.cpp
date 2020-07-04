#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll test;
	cin >> test;
	
	queue<ll>q;
	
	while(test--){
		while(!q.empty()){
			q.pop();
		}
		
		ll n;
		cin >> n;
		
		string s;
		cin >> s;
		
		for(int i=0; i<s.length(); i++){
			if (s[i] == '(') 
				q.push(s[i]);
			else{
				if(!q.empty()) q.pop();
			}
		}
		
		cout << q.size() <<endl;
	}
}
