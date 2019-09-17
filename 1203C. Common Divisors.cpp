#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,cnt=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
        cin>>v[i];
    
    ll g = v[0];
    for(ll i=1; i<n; i++)
    {
        g = __gcd(g,v[i]);
    }
    
    for(ll i=1; i<=sqrt(g); i++)
    {
        if(g%i==0){
            cnt++;
            if(i!=(g/i)){
				cnt++;
			}
        }
    }
    cout<<cnt<<endl;
    return 0;
}
