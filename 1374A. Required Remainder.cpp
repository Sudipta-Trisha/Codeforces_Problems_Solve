#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll x,y,n;
		cin >> x >> y >> n;
		
		ll temp = n - (n%x)+y;
		if(temp > n) cout << temp - x <<endl;
		else cout << temp << endl;
	}
}
