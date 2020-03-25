#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  int test;
  cin>>test;
  
  while(test--)
  {
    ll n;
    cin>>n;
    
    vector<ll>arr(n+10);
    for(ll i=0; i<n; i++){
      cin>>arr[i];
    }
    
    set<ll>s;
    
    for(ll i=0; i<n; i++){
      s.insert(arr[i]);
    }
    
    cout<<s.size()<<endl;
  }
  return 0;
}
