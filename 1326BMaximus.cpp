#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll n;
  cin>>n;
  
  vector<ll>b(n+10);
  for(ll i=0; i<n; i++){
    cin>>b[i];
  }
  
  vector<ll>x;
  vector<ll>a;
  
  x.push_back(0);
  x.push_back(b[0]);
  
  for(ll i=1; i<n-1; i++){
    x.push_back(max((x[i]+b[i]),x[i]));
  }
  
  for(ll i=0; i<n; i++){
    a.push_back(b[i]+x[i]);
  }
  
  for(ll i=0; i<a.size(); i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
