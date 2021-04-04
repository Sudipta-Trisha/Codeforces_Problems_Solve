
// Problem: B. Easy Number Challenge
// Contest: Codeforces - Codeforces Round #146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000

vector<ll>v;
bool arr[10000000+10];
ll mod =  1073741824;

ll factorization (ll n)
{
  
  ll ans=1;
  
  for(ll i=0; i<v.size(); i++){
    ll cnt=1;
    ll x = v[i];
    if(x*x>n) 
      break;
    while(n%x==0){
      cnt++;
      n/=x;
    }
    ans=ans*cnt;
  }
  if(n>1){
    ans  =  ans * 2;
  }
  return ans;
}

void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }
      
    }
}

int main()
{
  sieve();
  ll a,b,c;
  cin >> a >> b >> c;
  
  ll res = 0;
  
  for(ll i=1; i<=a; i++){
  	for(ll j=1; j<=b; j++){
  		for(ll k=1; k<=c; k++){
  			ll temp = i*j*k;
  			res = res + factorization(temp);
  		}
  	}
  }
  
  cout << res % mod << endl;
  return 0;
}