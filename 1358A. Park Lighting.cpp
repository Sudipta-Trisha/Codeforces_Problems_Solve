#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll test;
    cin>>test;
    
    while(test--){
        ll n,m,ans=0,street,extra;
        cin>>n>>m;
        
        street = n*(m+1) + m*(n+1);
        extra = (n+1) * (m+1);
        
        ans = (street-extra)/2 + 1;
        cout<<ans<<endl;
    }
   
}
