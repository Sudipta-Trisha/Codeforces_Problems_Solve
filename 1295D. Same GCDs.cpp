#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 1000000009

ll phi_func(ll n)
{
    ll node = n;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            node = node - (node/i);
        }
    }
    if(n>1){
        node = node - (node/n);
    }
    return node;
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        ll a,m;
        cin>>a>>m;

        ll ans = phi_func(m/(__gcd(a,m)));

        cout<<ans<<endl;
    }
    return 0;
}
