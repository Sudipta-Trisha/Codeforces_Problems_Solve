#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000
#define siz 1000000
#define mod 1000000007

vector<ll>v;
bool arr[10000000+10];

ll factorization (ll n)
{
   for(ll i=2; i*i<=n; i++){
     if(n%i==0)
       return i;
   }
   return n;
}

int main()
{
  ll n,cnt=0;
  cin>>n;
  if(n%2!=0){
    ll ans = factorization(n);
    n = n - ans;
    ++cnt;
  }
  ll result = cnt + (n/2);
  cout<<result<<endl;
  
  return 0;
}
