#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n>m){
        cout<<"0"<<endl;
        return 0;
    }
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin>>arr[i];
    ll ans=1;
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            ans = (ans* (abs(arr[i]-arr[j])%m))%m;
        }
    }
   // ll result= m%ans;
    cout<<ans<<endl;
    return 0;
}


