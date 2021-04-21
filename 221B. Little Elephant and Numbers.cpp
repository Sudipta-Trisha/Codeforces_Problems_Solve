
// Problem: B. Little Elephant and Numbers
// Contest: Codeforces - Codeforces Round #136 (Div. 2)
// URL: https://codeforces.com/problemset/problem/221/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxx = 100000009;

bool a[maxx] = {};
void get_every_digit(ll n)
{
	while(n > 0){
		a[n%10] = true;
		n/=10;
	}
}

bool digit_match(ll digit)
{
	while(digit > 0){
		if(a[digit%10]) {
			return true;
		}
		digit /= 10;
	}
	return false;
}

int main()
{
	ll n;
	cin >> n;	
	get_every_digit(n);
	
	ll cnt = 0;
	for(ll i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			if(digit_match(i)) cnt++;
			if(digit_match(n/i)) cnt++;
		}
	}
	
	ll sqrt_num = (int) sqrt(n);
	
	if(n == sqrt_num*sqrt_num) {
		if(digit_match(sqrt_num))
			cnt--;
	}
	cout << cnt << endl;
}
