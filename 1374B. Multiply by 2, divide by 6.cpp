#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll test;
	cin >> test;
	
	while(test--)
	{
		ll n;
		cin >> n;
		
		ll move1=0, move2=0;
		
		while(n%6==0){
			n = n/6;
			move1++;
		}
		
		while(n%3==0){
			n/=3;
			move2++;
		}
		
		if (n != 1) cout << "-1" <<endl;
		else cout << move1 + 2*move2 <<endl;
	}
}
