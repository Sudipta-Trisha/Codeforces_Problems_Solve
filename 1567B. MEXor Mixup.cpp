
// Problem: B. MEXor Mixup
// Contest: Codeforces - Codeforces Round #742 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1567/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll compute(ll n)
{
  if (n % 4 == 0)
    return n;
 
  if (n % 4 == 1)
    return 1;
 
  if (n % 4 == 2)
    return n + 1;
 
  return 0;
}
 

void solve()
{
	ll a,b;
	cin >> a >> b;
	
	ll res = compute(a-1);
	
	if(res == b) cout << a << endl;
	else if((res^b) == a) {
		cout << a+2 << endl;
	}
	else if((res^b)!=a) cout << a + 1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	ll test;
	cin >> test;
	
	while(test--){
		solve();
	}
}
