
// Problem: B. String LCM
// Contest: Codeforces - Educational Codeforces Round 102 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1473/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
	int ans = (a*b)/(__gcd(a,b));
	return ans;
}

int main()
{
	int test;
	cin >> test;
	
	while(test--){
		string a,b;
		cin >> a >> b;
		
		int len_a = a.length();
		int len_b = b.length();
		
		int lcm = LCM(len_a, len_b);
		string temp_a = a, temp_b = b;
		
		for(int i=1; i<(lcm/len_a); i++){
			if(a.length() == lcm) 
				break;
			a += temp_a;
		}
		for(int i=1; i<(lcm/len_b); i++){
			if(b.length() == lcm){ 
				break;
			}
			b += temp_b;
		}
		
		if( a == b) cout << a << endl;
		else cout << "-1" << endl;
		//cout << a << " " << b << endl;
	}
}